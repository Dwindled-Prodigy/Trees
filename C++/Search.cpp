bool Search(Node* root, int target) {
    if (root == NULL)
        return false;

    if (root->data == target)
        return true;
    else if (target < root->data)
        return Search(root->left, target);
    else
        return Search(root->right, target);
}
