void DisplayPreorder(Node* root) {
    if (root == NULL)
        return;

    cout << root->data << " ";
    DisplayPreorder(root->left);
    DisplayPreorder(root->right);
}
