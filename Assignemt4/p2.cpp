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

vector<int> decNode(Node *root)
{

    vector<int>v;

    if(root == NULL)
    {
        return v;

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

        if(pr->left == NULL && pr->right == NULL)
        {

            v.push_back(pr->value);
        }

        if(pr->left)
        {
            q.push(pr->left);
        }
        if(pr->right)
        {
            q.push(pr->right);
        }
    }

    return v;
}

int main()
{

    Node* rt = levelInput();

    vector<int>v = decNode(rt);

    sort(v.begin(),v.end(),greater<int>());

    for(int i : v)
    {
        cout<<i<<" ";
    }
}
