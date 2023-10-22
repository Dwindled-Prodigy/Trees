public int findDepth(Node root) {
    if (root == null)
        return 0;

    int leftDepth = findDepth(root.left);
    int rightDepth = findDepth(root.right);

    return (leftDepth > rightDepth) ? (leftDepth + 1) : (rightDepth + 1);
}
