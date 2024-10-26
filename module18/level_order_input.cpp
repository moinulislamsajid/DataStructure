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

Node* level_order_input()
{
    int val;
    cin>>val;

    Node* root;

    if(val == -1)
    {
        root = NULL;
    }else
    {
        root = new Node(val);
    }

    // create a queue

    queue<Node*>q;

    if(root)
    {
        q.push(root);
    }

    // now works while loop for 3 three specific works

    while(!q.empty())
    {
        // 1. bar kora ano
        Node* pnt = q.front();
        q.pop();

        // sob kaj

        int l,r;
        cin>>l>>r;
        Node * temLeft;
        Node * temRight;

        if(l == -1)
        {
            temLeft = NULL;
        }else
        {
            temLeft = new Node(l);
        }

        if(r == -1)
        {
            temRight = NULL;
        }else
        {
            temRight = new Node(r);
        }

        // connected to main left And right

        pnt->left = temLeft;
        pnt->right = temRight; // this is connected to the main left and right

        // child gula push koro

        if(pnt->left)
        {
            q.push(pnt->left);
        }
        if(pnt->right)
        {
            q.push(pnt->right);
        }


    }

    return root;

}

void level_order_print(Node *root)
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
        Node* fr = q.front();
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
    Node * root = level_order_input();
    level_order_print(root);

}
