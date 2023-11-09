#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

void printLevelOrder(Node* root) {
    if (root == NULL) return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* node = q.front();
        cout << node->data << " ";
        q.pop();
        if (node->left != NULL)
            q.push(node->left);
        if (node->right != NULL)
            q.push(node->right);
    }
}

int main() {
    Node* root = new Node{10};
    root->left = new Node{44};
    root->right = new Node{7};
    root->left->left = new Node{13};
    root->left->right = new Node{20};
    root->right->right = new Node{9};
    printLevelOrder(root);
    return 0;
}