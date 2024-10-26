#include<bits/stdc++.h>
using namespace std;

class Node

{
public :

    int value;
    Node * next;
    Node * prev;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->next = NULL;
    }




};


class MyStack

{

public :

    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node* newNode = new Node(val);

        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }else
        {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }
    void pop()
    {

        sz--;
        Node * delN = tail;
        tail = tail->prev;
        if(tail == NULL)
        {
            head = NULL;
        }else
        {
            tail->next = NULL;
        }
        delete delN;

    }
    int top()
    {
        return tail->value;
    }

    int size_get()
    {
        return sz;
    }

    bool empty_get()
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
    MyStack myst;

    int n;
    cout<<"Enter the size of stack ";
    cin>>n;

    for(int i = 0; i<n; i++)
    {
        int x;
        cin>>x;

        myst.push(x);
    }

    while(!myst.empty_get())
    {
        cout<<myst.top()<<" ";
        myst.pop();
    }

    // when ever delete



}
