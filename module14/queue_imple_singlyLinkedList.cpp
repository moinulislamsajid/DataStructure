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



class Myqueue
{
public :

    Node *head = NULL;
    Node *tail = NULL;
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
        tail->next = newNode;
        tail = tail->next;
    }

    void pop()
    {
        sz--;
        Node *delN = head;
        head = head->next;
        delete delN;
        if(head == NULL)
        {
            tail = NULL;
        }

    }

    int front_()
    {
        return head->value;
    }
    int size_get()
    {
        return sz;
    }
    bool empty1()
    {
        if(sz == 0)
        {
            return true;
        }else
        {
            return false;
        }
    }
};

int main()
{

    Myqueue que;
    que.push(1);
    que.push(11);
    que.push(16);

    cout<<que.front_()<<endl;

    que.pop();
    que.pop();

    cout<<que.front_()<<endl;

    Myqueue q;
    int n;
    cout<<"Enter size of queue : ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }

    while(!q.empty1())
    {

        cout<<q.front_()<<" ";
        q.pop();
    }



}
