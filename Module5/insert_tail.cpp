#include<bits/stdc++.h>
using namespace std;

class Node
{
public:

    int value;
    Node * next;

    // create a constructor to initial the value

    Node(int value)
    {
        this>value = value;
        this->next = NULL:
    }

};

void print_value(Node *head)
{

    Node *temp = head;

    while(temp != NULL)
    {
        cout<<temp->value<<"-> ";
        temp = temp->next;
    }
}

void insert_tail(Node *&head,Node *&tail,int value)
{

    Node* newNode = new Node(value);

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

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    // connected to the node

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;


}
