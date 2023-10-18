TreeNode* arrayToBinaryTree(int arr[], int& index, int size) {
    if (index >= size || arr[index] == -1) {
        index++;
        return nullptr;
    }

    TreeNode* node = new TreeNode;
    node->data = arr[index++];
    node->left = arrayToBinaryTree(arr, index, size);
    node->right = arrayToBinaryTree(arr, index, size);
    return node;
}

void inOrderTraversal(TreeNode* root) {
    if (root) {
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}
