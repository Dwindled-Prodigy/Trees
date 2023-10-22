void DisplayPostorder(Node* root) {
    if (root == NULL)
        return;

    DisplayPostorder(root->left);
    DisplayPostorder(root->right);
    cout << root->data << " ";
}
