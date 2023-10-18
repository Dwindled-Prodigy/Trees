public boolean areIdentical(Node root1, Node root2) {
    if (root1 == null && root2 == null)
        return true;
    if (root1 == null || root2 == null)
        return false;
    
    return (root1.data == root2.data) &&
           areIdentical(root1.left, root2.left) &&
           areIdentical(root1.right, root2.right);
}

public boolean isSubtree(Node root1, Node root2) {
    if (root2 == null)
        return true;
    if (root1 == null)
        return false;

    if (areIdentical(root1, root2))
        return true;

    return isSubtree(root1.left, root2) || isSubtree(root1.right, root2);
}
