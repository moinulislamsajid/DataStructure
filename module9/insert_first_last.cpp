#include<bits/stdc++.h>
using namespace std;

class Node
{
public:

    int value;
    Node* next;
    Node* prev;

    Node(int value)
    {

       this->value = value;
       this->next = NULL;
       this->prev = NULL;

    }


};

void print_right(Node *head)
{

    Node *temp = head;

    while(temp != NULL)
    {

        cout<<temp->value<<"->";
        temp = temp->next;
    }

    cout<<endl;

}

void print_left(Node *tail)
{

    Node *temp = tail;
    while(temp != NULL)
    {
        cout<<temp->value<<"->";
        temp = temp->prev;
    }

}

void insert_first(Node * &head,Node * & tail,int val)
{

    Node *newNode = new Node(val);

    if(head == NULL)
    {

        head = tail = newNode;
        return;
    }

    head->prev = newNode;
    newNode->next = head;
    head = newNode;

}
void insert_last(Node * &head,Node * & tail,int val)
{

    Node *newNode = new Node(val);

    if(head == NULL)
    {

        head = tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;

}


int main()

{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    // connected to the node

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;



    insert_first(head,tail,100);
    insert_last(head,tail,77);

    print_right(head);
    print_left(tail);
}
