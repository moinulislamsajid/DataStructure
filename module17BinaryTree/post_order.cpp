#include<bits/stdc++.h>
using namespace std;

class Node
{
public:

    int value;
    Node * left;
    NOde * right;

    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

void postOrder(Node *root)
{


    if(root == NULL)
    {
        return;
    }
}

int main()
{

    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *c = new Node(30);
    Node *d= new Node(40);
    Node *e = new Node(50);
    Node *f= new Node(60);
    Node *g = new Node(70);
    Node *i = new Node(80);
    Node *j = new Node(90);
    Node *k = new Node(100);
    Node *l = new Node(110);
    Node *m = new Node(120);
}
