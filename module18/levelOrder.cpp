#include<bits/stdc++.h>
using namespace std;

class Node
{
public :

    int value;
    Node *left;
    Node *right;

    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

// print level order

void level_order(Node *root)
{

    queue<Node*>q;
    q.push(root);

    while(!q.empty())
    {
        // a first kaj

        Node * fron = q.front();
        q.pop();

        // second kaj

        cout<<fron->value<<" ";

        // third kaj


        if(fron->right)
        {
            q.push(fron->right);
        }
        if(fron->left)
        {
            q.push(fron->left);
        }
    }


}

int main()
{

    Node * root = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * d = new Node(50);
    Node * e = new Node(60);
    Node * f = new Node(70);
    Node * g = new Node(80);
    Node * h = new Node(90);
    Node * i = new Node(100);


    // connection of the node

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    b->right = d;
    c->right = e;
    d->left = f;
    d->right = g;
    h->right = i;


    // called the level order

    level_order(root);


}
