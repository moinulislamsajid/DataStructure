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

void printLevel(Node * root,int level)
{

    if(root == NULL)
    {
        return;
    }

    queue<pair<Node*,int>>q;

    q.push({root,0});

   int flag = 0;

    while(!q.empty())
    {

        pair<Node*,int> fr = q.front();
        Node * node = fr.first;
        int lvl = fr.second;
        q.pop();

        if(lvl==level)
        {
            cout<<node->value<<" ";
            flag = 1;
        }

        if(node->left)
        {
            q.push({node->left,lvl + 1});

        }
        if(node->right)
        {
            q.push({node->right,lvl + 1});

        }

    }

    if(flag == 0)
    {
        cout<<"Invalid"<<endl;
    }


}

int main()
{

    Node * root = levelInput();
    int n;
    cin>>n;

    int maxd = depth(root);
    if (n >= maxd) {

        cout << "Invalid" << endl;

    } else {

        printLevel(root, n);
    }


}
