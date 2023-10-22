int FindDepth(struct Node* root) {
    if (root == NULL)
        return 0;

    int leftDepth = FindDepth(root->left);
    int rightDepth = FindDepth(root->right);

    return (leftDepth > rightDepth) ? (leftDepth + 1) : (rightDepth + 1);
}
