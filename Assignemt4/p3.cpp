#include<bits/stdc++.h>
using namespace std;

class Node
{
public :

    int value;
    Node * left;
    Node * right;

    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }


};

Node* levelInput()
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

    queue<Node*>q;

    if(root)
    {
        q.push(root);
    }

    while(!q.empty())
    {
        Node* fr = q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node * myleft;
        Node * myright;

        if(l == -1)
        {
            myleft = NULL;
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
        fr->left = myleft;
        fr->right = myright;

        if(fr->left)
        {
            q.push(fr->left);
        }
        if(fr->right)
        {
            q.push(fr->right);
        }
    }

    return root;
}

int depth(Node *root)
{

    if(root == NULL)
    {
        return 0;
    }

    int l = depth(root->left);
    int r = depth(root->right);

    return max(l,r)+1;

}

int countNode(Node * root)
{
    if(root == NULL)
    {
        return 0;
    }

    return 1+countNode(root->left)+countNode(root->right);
}

int main()
{


    Node * root = levelInput();

    int  maxheight = depth(root);
    int totalNode = countNode(root);

    if(totalNode == pow(2,maxheight) - 1)
    {
        cout<<"YES"<<endl;
    }else
    {
        cout<<"NO"<<endl;
    }

}
