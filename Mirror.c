struct Node* MirrorTree(struct Node* root) {
    if (root == NULL)
        return root;

    struct Node* left = MirrorTree(root->left);
    struct Node* right = MirrorTree(root->right);

    root->left = right;
    root->right = left;

    return root;
}
