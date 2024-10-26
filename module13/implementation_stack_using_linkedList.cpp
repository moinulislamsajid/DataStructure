#include<bits/stdc++.h>
using namespace std;

class Node
{
public :

    int value;
    Node *next;
    Node *prev;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{
public :

    Node * head = NULL;
    Node * tail = NULL;
    int sz=0;

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);

        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        else
        {

           tail->next = newNode;
           newNode->prev = tail;
           tail = newNode;
        }
    }

    void pop()
    {
        sz--;
        Node * delN = tail;
        tail = tail->prev;
        delete delN;

        tail->next = NULL;
    }

    int top()
    {
        return tail->value;
    }
    int stackSize()
    {
        return sz;
    }
    bool stackEmpty()
    {
        if(sz == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    int n;
    cin>>n;

    myStack st;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;

        st.push(x);
    }

    while(!st.stackEmpty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
}
