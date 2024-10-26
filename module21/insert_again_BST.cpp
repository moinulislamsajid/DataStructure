#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int value;
    Node *left, *right;

    Node(int value) {
        this->value = value;
        this->left = this->right = NULL;
    }
};

Node* level_order_input() {
    int val;
    cin >> val;

    if (val == -1) {
        return NULL;
    }

    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1) {
            current->left = new Node(l);
            q.push(current->left);
        }

        if (r != -1) {
            current->right = new Node(r);
            q.push(current->right);
        }
    }

    return root;
}

void level_order_print(Node* root) {
    if (!root) {
        cout << "Tree is empty" << endl;
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* node = q.front();
        q.pop();

        cout << node->value << " ";

        if (node->left) {
            q.push(node->left);
        }
        if (node->right) {
            q.push(node->right);
        }
    }
    cout << endl;
}

void insert_value(Node* &root,int val)
{

    if(root == NULL)
    {
        root = new Node(val);
        return;
    }

    if(val < root->value)
    {
        if(root->left == NULL)
        {
            root->left = new Node(val);
        }
        else
        {
            insert_value(root->left,val);
        }
    }
    else
    {
        if(root->right == NULL)
        {
            root->right = new Node(val);
        }
        else
        {
            insert_value(root->right,val);
        }
    }
}

int main()
{
    Node * root = level_order_input();

    int n;
    cout<<"Enter any value to insert BST : ";
    cin>>n;

    // called the method

    insert_value(root,n);
    level_order_print(root);



}
