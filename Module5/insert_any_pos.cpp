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

void Insert_any_Node(Node *head,int value,int pos)
{
    Node *newNode = new Node(value);
    Node *temp = head;

    for(int i=1; i<=pos-1; i++)
    {
        temp=temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void print_Node(Node *head)
{

    Node * temp = head;

    while(temp != NULL)
    {
        cout<<temp->value<<"->";
        temp = temp->next;
    }

}

int find_size(Node *head)
{
    Node *temp = head;

    int cn = 0;

    while(temp != NULL)
    {
        cn++;
        temp = temp->next;
    }

    return cn;
}

int main()
{
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * d = new Node(50);
    Node * e = new Node(60);

    // connected to the node

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    // call the print function

    print_Node(head);

    cout<<endl;

    Insert_any_Node(head,200,2);

    print_Node(head);
}
