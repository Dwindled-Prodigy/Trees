TreeNode arrayToBinaryTree(int[] arr, int[] index, int size) {
    if (index[0] >= size || arr[index[0]] == -1) {
        index[0]++;
        return null;
    }

    TreeNode node = new TreeNode(arr[index[0]++]);
    node.left = arrayToBinaryTree(arr, index, size);
    node.right = arrayToBinaryTree(arr, index, size);
    return node;
}

void inOrderTraversal(TreeNode root) {
    if (root != null) {
        inOrderTraversal(root.left);
        System.out.print(root.data + " ");
        inOrderTraversal(root.right);
    }
}
