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

Node *levelInput()
{
    int n;
    cin>>n;

    Node *root;

    if(n == -1)
    {
        root = NULL;
    }else
    {
        root = new Node(n);
    }

    queue<Node*>q;

    if(root)
    {
        q.push(root);
    }

    while(!q.empty())
    {
        Node *pr = q.front();
        q.pop();

        Node* myleft;
        Node* myright;

        int l,r;
        cin>>l>>r;

        if(l == -1)
        {
            myleft=NULL;
        }else
        {
            myleft = new Node(l);
        }

        if(r == -1)
        {
            myright = NULL;
        }else
        {
            myright = new Node(r);
        }

        // connected to previous and present

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

int count_leaf(Node *root)
{

    if(root == NULL)
    {
        return 0;
    }

    if(root->left == NULL && root->right == NULL)
    {

        return 1;
    }else
    {
        int l = count_leaf(root->left);
        int r = count_leaf(root->right);
        return l+r;

    }



}

int main()
{

    Node *root = levelInput();
    cout<<count_leaf(root)<<endl;
}
