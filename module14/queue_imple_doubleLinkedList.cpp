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

class Myque
{
public :

    Node* head = NULL;
    Node* tail = NULL;
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

        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;

    }

    void pop()
    {
        sz--;

        Node *delN = head;
        head = head->next;
        if(head == NULL)
        {
            tail = NULL;
            delete delN;
            return;
        }
        head->prev = tail;
        delete delN;
    }

    int front_()
    {
        return head->value;
    }

    int size_()
    {
        return sz;
    }

    bool empty_()
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

    Myque s;
    s.push(9);
    s.push(91);
    s.push(6);

    cout<<s.front_()<<endl;
    cout<<endl;

    s.pop();
    s.pop();

    cout<<s.front_()<<endl;


    // create another class objects

    Myque que;

    int n;
    cout<<"Enter the size of queue : ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int c;
        cin>>c;
        que.push(c);

    }

    // now print the queue

    while(!que.empty_())
    {
        cout<<que.front_()<<" ";
        que.pop();

    }

}
