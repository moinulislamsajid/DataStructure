#include<bits/stdc++.h>
using namespace std;

class Node
{
public :

    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

class myQueue
{
public :

    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

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
            tail = newNode;
        }
    }


    void pop()
    {
        sz--;
        Node *delN = head;
        head = head->next;
        delete delN;
    }

    int top()
    {
        return head->value;
    }

    int queueSize()
    {
        return sz;
    }

    bool queueEmpty()
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
    myQueue que;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        que.push(x);
    }

    while(!que.queueEmpty())
    {
        cout<<que.top()<<endl;
        que.pop();
    }

}
