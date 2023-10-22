Node* DeleteNode(Node* root, int key) {
    if (root == NULL)
        return root;

    if (key < root->data) {
        root->left = DeleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = DeleteNode(root->right, key);
    } else {
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* temp = FindMinNode(root->right);
        root->data = temp->data;
        root->right = DeleteNode(root->right, temp->data);
    }
    return root;
}

Node* FindMinNode(Node* node) {
    Node* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}
