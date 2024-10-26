#include<bits/stdc++.h>
using namespace std;

class Node
{

public :

    int value;
    Node *next;
    Node *prev;

    // create a constructor

    Node(int value)
    {

        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

class my_Queue{

public :

    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);

        if(tail == NULL)
        {
            head = newNode;
            tail = newNode;
            return;

        }else{

            tail->next = newNode;
            newNode->prev  = tail;
            tail = tail->next;

        }
    }

    void pop()
    {
        sz--;
        Node *deleteN = head;
        head = head->next;

        if(head == NULL)
        {

            tail = NULL;
            delete deleteN;
            return;
        }
        head->prev = NULL;
        delete deleteN;
    }

    int front1()
    {
        return head->value;
    }

    int size1 ()
    {

        return sz;
    }

    bool empty1()
    {

        if(sz==0)
        {

            return true;
        }else{

            false;
        }
    }

};


int main()
{
    my_Queue obj;

    int n;
    for(int  i =0; i<5; i++)
    {
        cin>>n;
        obj.push(n);

    }

    while(obj.empty1 == false)
    {


            cout<<obj.front1<<endl;
            obj.pop();
    }

}
