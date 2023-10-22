Node* MirrorTree(Node* root) {
    if (root == NULL)
        return root;

    Node* left = MirrorTree(root->left);
    Node* right = MirrorTree(root->right);

    root->left = right;
    root->right = left;

    return root;
}
