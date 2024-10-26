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

void insert_any(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node* temp = head;

    for(int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    if(temp->next != NULL)
    {
        temp->next->prev = newNode; // Update the previous pointer of the next node
    }

    temp->next = newNode;
    newNode->prev = temp;
}


int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail= c;

    // connected the node

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    // called the value

    //print_right(head);
    //print_left(tail);

    // called the method from insertAny

    insert_any(head,1,99);

    print_right(head);
    print_left(tail);

    }
