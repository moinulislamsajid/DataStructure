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

void insert_First(Node *&head,int value)
{

    Node *newNode = new Node(value);

    if(head == NULL)
    {
        head = newNode;
        return;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }

}

void print_Node(Node *head)
{
    Node *temp = head;

    while(temp != NULL)
    {
        cout<<temp->value<<"->";
        temp = temp->next;
    }
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);

    // connected to the node

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;


    // called the print function

    print_Node(head);

    cout<<endl;

    // called insert first method

    insert_First(head,100);

    // called the print function

     print_Node(head);

}
