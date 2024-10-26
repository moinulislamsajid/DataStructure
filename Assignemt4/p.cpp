#include <bits/stdc++.h>

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


Node* inputLevel()
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
        Node* pr = q.front();
        q.pop();

        Node * myleft;
        Node * myright;

        int l,r;
        cin>>l>>r;

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

        pr->left = myleft;
        pr->right = myright;

        // push the value

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


int sumNode(Node* root)
{
    if(root == NULL)
    {

        return 0;
    }

    queue<Node*>q;

    if(root)
    {

        q.push(root);
    }
    int sum = 0;


    while(!q.empty())
    {
        Node * pr = q.front();
        q.pop();



        if(pr->left != NULL || pr->right != NULL)
        {

            sum = sum + pr->value;

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

    return sum;
}



int main()
{
    // Write your code here

    Node * root = inputLevel();
    int ans = sumNode(root);

    cout<<ans<<endl;

    return 0;
}

