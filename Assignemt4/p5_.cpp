#include <bits/stdc++.h>
using namespace std;

class Node
{

public:

    int value;
    Node *left, *right;

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
    }
    else
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
        }
        else
        {
            myleft = new Node(l);
        }
        if(r == -1)
        {
            myright = NULL;
        }
        else
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


vector<int> v;


void print_left(Node *root)
{

    if(root->left)
    {
        v.push_back(root->left->value);
        print_left(root->left);
    }
    else if(root->right)
    {
        v.push_back(root->right->value);
        print_left(root->right);
    }
}

void print_right(Node * root)
{

    if(root->right)
    {
        cout<<root->right->value<<" ";
        print_right(root->right);
    }
    else if(root->left)
    {
        cout<<root->left->value<<" ";
        print_right(root->left);
    }


}


int main()
{


    Node * root = levelInput();


    if(root!=NULL && root->left!=NULL)
    {

        if(root->left)
        {
            print_left(root);

            reverse(v.begin(),v.end());

            v.push_back(root->value);

            for(int i : v)
            {
                cout<<i<<" ";
            }


        }

        if(root->right)
        {

            print_right(root);
        }
    }
    else if(root!=NULL && root->right!=NULL)
    {
        cout<<root->value<<" ";
        print_right(root);
    }
    else
    {

        cout<<root->value<<" ";

    }



    return 0;
}
