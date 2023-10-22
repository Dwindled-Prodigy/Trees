int FindDiameter(Node* root) {
    if (root == NULL)
        return 0;

    int leftHeight = FindHeight(root->left);
    int rightHeight = FindHeight(root->right);

    int leftDiameter = FindDiameter(root->left);
    int rightDiameter = FindDiameter(root->right);

    return max(max(leftDiameter, rightDiameter), leftHeight + rightHeight + 1);
}
