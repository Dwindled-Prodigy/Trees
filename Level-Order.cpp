#include <iostream>
#include <queue>

void DisplayLevelOrder(Node* root) {
    if (root == NULL)
        return;

    std::queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        std::cout << current->data << " ";

        if (current->left)
            q.push(current->left);
        if (current->right)
            q.push(current->right);
    }
}
