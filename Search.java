public boolean search(Node root, int target) {
    if (root == null)
        return false;

    if (root.data == target)
        return true;
    else if (target < root.data)
        return search(root.left, target);
    else
        return search(root.right, target);
}
