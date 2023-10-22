struct Node* FindLCA(struct Node* root, int n1, int n2) {
    if (root == NULL)
        return NULL;

    if (root->data == n1 || root->data == n2)
        return root;

    struct Node* leftLCA = FindLCA(root->left, n1, n2);
    struct Node* rightLCA = FindLCA(root->right, n1, n2);

    if (leftLCA && rightLCA)
        return root;
    
    return (leftLCA != NULL) ? leftLCA : rightLCA;
}
