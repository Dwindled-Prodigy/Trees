class Node {
    int data;
    Node left;
    Node right;
}

public class BinaryTree {
    Node root;

    public Node DeleteNode(Node root, int key) {
        if (root == null)
            return root;

        if (key < root.data) {
            root.left = DeleteNode(root.left, key);
        } else if (key > root.data) {
            root.right = DeleteNode(root.right, key);
        } else {
            if (root.left == null) {
                return root.right;
            } else if (root.right == null) {
                return root.left;
            }
            Node temp = FindMinNode(root.right);
            root.data = temp.data;
            root.right = DeleteNode(root.right, temp.data);
        }
        return root;
    }

    public Node FindMinNode(Node node) {
        Node current = node;
        while (current != null && current.left != null)
            current = current.left;
        return current;
    }
}
