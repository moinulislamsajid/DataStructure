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

Node* convert(int num[],int n, int l, int r)
{

    if(l>r)
    {
        return NULL;
    }

    int mid = (l+r)/2;
    Node * root = new Node(num[mid]);
    Node * lroot = convert(num,n,l,mid - 1);
    Node * rroot = convert(num,n,l,mid + 1);
    root->left = lroot;
    root->right = rroot;

    return root;

}
int main()
{

    int n;
    cout<<"Enter the size of arrays : ";
    cin>>n;

    int num[n];

    for(int i = 0; i<n; i++)
    {
        cin>>num[i];

    }

    Node * root = convert(num,n,0,n-1);
}
