struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* DeleteNode(struct Node* root, int key) {
    if (root == NULL)
        return root;

    if (key < root->data) {
        root->left = DeleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = DeleteNode(root->right, key);
    } else {
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }
        struct Node* temp = FindMinNode(root->right);
        root->data = temp->data;
        root->right = DeleteNode(root->right, temp->data);
    }
    return root;
}

struct Node* FindMinNode(struct Node* node) {
    struct Node* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}
