#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
        int val;
        node* left;
        node* right;
    node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
node* input()
{
    int val;
    cin>>val;
    node* root;
    if(val==-1) root=NULL;
     else root=new node(val);
    queue<node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        node* f = q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        node* nodeleft;
        node* noderight;
        if(l==-1) nodeleft=NULL;
        else nodeleft=new node(l);
        if(r==-1) noderight=NULL;
        else noderight=new node(r);
        f->left=nodeleft;
        f->right=noderight;
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return root;
}

void print_right(node* root)
{
    if(root->right)
    {
        cout<<root->right->val<<" ";
        print_right(root->right);

    }
    else if(root->left)
    {
        cout<<root->left->val<<" ";
        print_right(root->left);
    }
}
vector<int> v;
void print_left(node* root)
{
    if(root->left)
    {
        v.push_back(root->left->val);
        print_left(root->left);

    }
    else if(root->right)
    {
        v.push_back(root->right->val);
        print_left(root->right);
    }
}


int main()
{
    node* root=input();
    if(root!=NULL && root->left!=NULL)
    {
        if(root->left)
        {
            print_left(root);
            reverse(v.begin(),v.end());
            v.push_back(root->val);
            for(int i:v)
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
        cout<<root->val<<" ";
        print_right(root);
    }
    else {
        cout<<root->val;
    }

    return 0;
}
