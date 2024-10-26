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
int maxLevel = 0;

void leftView(Node* root, int level,
              vector<int>& ans)
{
    if (!root)
    {
        return;

    }

    if (maxLevel < level)
    {
        ans.push_back(root->value);
        maxLevel = level;
    }
    leftView(root->left, level + 1, ans);
}
void rightView(Node* root, int level,
               vector<int>& ans)
{
    if (!root)
    {
         return;
    }

    if (maxLevel < level)
    {
        ans.push_back(root->value);
        maxLevel = level;
    }
    rightView(root->right, level + 1, ans);
}
vector<int> MidLevel(Node* root)
{
    maxLevel = 0;

    vector<int> ans;


    leftView(root->left, 1, ans);

    reverse(ans.begin(), ans.end());

    maxLevel = 0;


    rightView(root, 1, ans);
    return ans;
}

int main()
{

    Node * root = levelInput();

    vector<int> ans = MidLevel(root);

    for(int i : ans)
    {
        cout<<i<<" ";
    }
}
