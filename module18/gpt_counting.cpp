#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int value;
    Node* left;
    Node* right;

    Node(int value) {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* level_input() {
    int val;
    cin >> val;

    Node* root;

    if (val == -1) {
        root = NULL;
    } else {
        root = new Node(val);
    }

    // Create a queue to process nodes in level order
    queue<Node*> q;

    if (root) {
        q.push(root);
    }

    while (!q.empty()) {
        Node* pr = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node* myleft;
        Node* myright;

        if (l == -1) {
            myleft = NULL;
        } else {
            myleft = new Node(l);
            q.push(myleft);  // Push the left child to the queue
        }

        if (r == -1) {
            myright = NULL;
        } else {
            myright = new Node(r);
            q.push(myright);  // Push the right child to the queue
        }

        pr->left = myleft;
        pr->right = myright;
    }

    return root;
}

int counting(Node* root) {
    if (root == NULL) {
        return 0;
    }
    int l = counting(root->left);
    int r = counting(root->right);

    return l + r + 1;
}

int main() {
    Node* root = level_input();
    cout << counting(root) << endl;
}

