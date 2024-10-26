#include<bits/stdc++.h>
using namespace std;

class Node
{
public :

    int value;
    Node * next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void Print_Node(Node *head)
{
    Node * temp = head;

    while(temp != NULL)
    {
        cout<<temp->value<<"->";
        temp = temp->next;
    }

}



int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    // connected the node

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // called print function

    Print_Node(head);

}
