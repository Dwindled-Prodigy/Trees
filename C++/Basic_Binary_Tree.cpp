#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* CreateNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node* InsertNode(Node* root, int data) {
    if (root == NULL) {
        root = CreateNode(data);
        return root;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp->left != NULL)
            q.push(temp->left);
        else {
            temp->left = CreateNode(data);
            return root;
        }

        if (temp->right != NULL)
            q.push(temp->right);
        else {
            temp->right = CreateNode(data);
            return root;
        }
    }
    return root;
}

void inorder(Node* temp) {
    if (temp == NULL)
        return;

    inorder(temp->left);
    cout << temp->data << ' ';
    inorder(temp->right);
}

int main() {
    Node* root = NULL;
    int key;

    while (true) {
        cout << "Choose an option:\n";
        cout << "1. Insert a number into the binary tree\n";
        cout << "2. Display the inorder traversal\n";
        cout << "3. Exit\n";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a number to insert into the binary tree: ";
                if (!(cin >> key))
                    break;
                root = InsertNode(root, key);
                cout << "Insertion completed";
                cout << endl;
                break;
            case 2:
                cout << "Inorder traversal: ";
                inorder(root);
                cout << endl;
                break;
            case 3:
                cout << "Exiting the program\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
