#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* CreateNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct Node* InsertNode(struct Node* root, int data) {
    if (root == NULL) {
        root = CreateNode(data);
        return root;
    }

    struct Node* temp;
    struct Node* queue[100];
    int front = -1, rear = -1;
    queue[++rear] = root;

    while (front != rear) {
        temp = queue[++front];

        if (temp->left != NULL)
            queue[++rear] = temp->left;
        else {
            temp->left = CreateNode(data);
            return root;
        }

        if (temp->right != NULL)
            queue[++rear] = temp->right;
        else {
            temp->right = CreateNode(data);
            return root;
        }
    }
    return root;
}

void inorder(struct Node* temp) {
    if (temp == NULL)
        return;

    inorder(temp->left);
    printf("%d ", temp->data);
    inorder(temp->right);
}

int main() {
    struct Node* root = NULL;
    int key;

    while (1) {
        printf("Choose an option:\n");
        printf("1. Insert a number into the binary tree\n");
        printf("2. Display the inorder traversal\n");
        printf("3. Exit\n");
        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number to insert into the binary tree: ");
                if (scanf("%d", &key) == 0)
                    break;
                root = InsertNode(root, key);
                printf("Insertion completed\n");
                printf("\n");
                break;
            case 2:
                printf("Inorder traversal: ");
                inorder(root);
                printf("\n");
                break;
            case 3:
                printf("Exiting the program\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
