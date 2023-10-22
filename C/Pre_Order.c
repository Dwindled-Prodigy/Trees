void DisplayPreorder(struct Node* root) {
    if (root == NULL)
        return;

    printf("%d ", root->data);
    DisplayPreorder(root->left);
    DisplayPreorder(root->right);
}
