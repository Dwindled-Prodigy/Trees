import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

class Node {
    int data;
    Node left;
    Node right;
}

public class BinaryTree {

    public static Node CreateNode(int data) {
        Node newNode = new Node();
        newNode.data = data;
        newNode.left = null;
        newNode.right = null;
        return newNode;
    }

    public static Node InsertNode(Node root, int data) {
        if (root == null) {
            root = CreateNode(data);
            return root;
        }

        Queue<Node> queue = new LinkedList<>();
        queue.add(root);

        while (!queue.isEmpty()) {
            Node temp = queue.poll();

            if (temp.left != null) {
                queue.add(temp.left);
            } else {
                temp.left = CreateNode(data);
                return root;
            }

            if (temp.right != null) {
                queue.add(temp.right);
            } else {
                temp.right = CreateNode(data);
                return root;
            }
        }
        return root;
    }

    public static void inorder(Node temp) {
        if (temp == null)
            return;

        inorder(temp.left);
        System.out.print(temp.data + " ");
        inorder(temp.right);
    }

    public static void main(String[] args) {
        Node root = null;
        int key;

        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("Choose an option:");
            System.out.println("1. Insert a number into the binary tree");
            System.out.println("2. Display the inorder traversal");
            System.out.println("3. Exit");
            int choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter a number to insert into the binary tree: ");
                    key = scanner.nextInt();
                    root = InsertNode(root, key);
                    System.out.println("Insertion completed");
                    System.out.println();
                    break;
                case 2:
                    System.out.print("Inorder traversal: ");
                    inorder(root);
                    System.out.println();
                    break;
                case 3:
                    System.out.println("Exiting the program");
                    return;
                default:
                    System.out.println("Invalid choice. Please try again.");
            }
        }
    }
}
