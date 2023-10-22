#include <stdio.h>
#include <stdlib.h>

void DisplayLevelOrder(struct Node* root) {
    if (root == NULL)
        return;

    struct Node* queue[100];
    int front = -1, rear = -1;
    queue[++rear] = root;

    while (front != rear) {
        struct Node* current = queue[++front];
        printf("%d ", current->data);

        if (current->left)
            queue[++rear] = current->left;
        if (current->right)
            queue[++rear] = current->right;
    }
}
