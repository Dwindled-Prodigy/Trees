public int findDiameter(Node root) {
    if (root == null)
        return 0;

    int leftHeight = findHeight(root.left);
    int rightHeight = findHeight(root.right);

    int leftDiameter = findDiameter(root.left);
    int rightDiameter = findDiameter(root.right);

    return Math.max(Math.max(leftDiameter, rightDiameter), leftHeight + rightHeight + 1);
}
