void DisplayPostorder(struct Node* root) {
    if (root == NULL)
        return;

    DisplayPostorder(root->left);
    DisplayPostorder(root->right);
    printf("%d ", root->data);
}
