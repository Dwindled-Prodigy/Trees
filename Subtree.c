bool AreIdentical(struct Node* root1, struct Node* root2) {
    if (root1 == NULL && root2 == NULL)
        return true;
    if (root1 == NULL || root2 == NULL)
        return false;
    
    return (root1->data == root2->data) &&
           AreIdentical(root1->left, root2->left) &&
           AreIdentical(root1->right, root2->right);
}

bool IsSubtree(struct Node* root1, struct Node* root2) {
    if (root2 == NULL)
        return true;
    if (root1 == NULL)
        return false;

    if (AreIdentical(root1, root2))
        return true;

    return IsSubtree(root1->left, root2) || IsSubtree(root1->right, root2);
}
