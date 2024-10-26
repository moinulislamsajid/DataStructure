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

void level_order(Node *root)
{

    if(root == NULL)
    {
        cout<<"Tree is empty";
        return;
    }

    queue<Node*>q;
    q.push(root);

    while(!q.empty())
    {

        Node *fr = q.front();
        q.pop();

        cout<<fr->value<<" ";

        if(fr->left)
        {
            q.push(fr->left);
        }
        if(fr->right)

        {
            q.push(fr->right);
        }


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


    // connection to the node

    root->left = a;
    root->right = c;
    a->left=d;
    a->right =e;
    c->left = f;
    c->right = g;
    d->left = i;
    e->left=j;
    f->left=k;
    f->right=l;
    g->right=m;


    // called the function

    level_order(root);

}

