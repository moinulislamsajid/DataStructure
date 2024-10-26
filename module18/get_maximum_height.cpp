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

int max_height(Node *root)
{

    if(root == NULL)
    {
        return 0;
    }
    int l = max_height(root->left);
    int r = max_height(root->right);

    return max(l,r)+1;



}

int main()
{

    Node *root = levelInput();
    cout<<max_height(root)<<endl;
}

