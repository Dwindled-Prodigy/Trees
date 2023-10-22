public void DisplayPostorder(Node root) {
    if (root == null)
        return;

    DisplayPostorder(root.left);
    DisplayPostorder(root.right);
    System.out.print(root.data + " ");
}
