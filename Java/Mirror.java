public Node mirrorTree(Node root) {
    if (root == null)
        return root;

    Node left = mirrorTree(root.left);
    Node right = mirrorTree(root.right);

    root.left = right;
    root.right = left;

    return root;
}
