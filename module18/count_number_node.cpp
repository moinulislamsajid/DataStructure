#include<bits/stdc++.h>
using namespace std;

class Node
{
    public :
    int value;
    Node* left;
    Node* right;

    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *level_input()
{

    int val;
    cin>>val;

    Node *root;

    if(val == -1)
    {
        root=NULL;
    }
    else
    {
        root = new Node(val);
    }

    // create a queue

    queue<Node*>q;

    if(root)
    {
        q.push(root);
    }

    while(!q.empty())
    {

        Node* pr = q.front();
        q.pop();

        int l,r;
        cin>>l>>r;

        Node* myleft;
        Node* myright;

        if(l==-1)
        {
            myleft = NULL;
        }else
        {
            myleft = new Node(l);
        }
        if(r==-1)
        {
            myright = NULL;

        }else
        {
            myright = new Node(r);
        }


        pr->left = myleft;
        pr->right = myright;

        if(pr->left)
        {
            q.push(pr->left);
        }
        if(pr->right)
        {
            q.push(pr->right);
        }
    }

    return root;

}

int counting(Node* root)
{

    if(root == NULL)
    {
        return 0;
    }
    int l = counting(root->left);
    int r = counting(root->right);

    return l+r+1;
}

int main()
{

    Node *root = level_input();
    cout<<counting(root)<<endl;
}
