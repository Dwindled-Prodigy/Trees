public void DisplayPreorder(Node root) {
    if (root == null)
        return;

    System.out.print(root.data + " ");
    DisplayPreorder(root.left);
    DisplayPreorder(root.right);
}
