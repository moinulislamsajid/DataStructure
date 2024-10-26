#include<bits/stdc++.h>
using namespace std;

class Node

{

public :

    int value;
    Node * next;
    Node * pre;

    // create a constructor

    Node(int value)
    {

        this->value = value;
        this->next = NULL;
        this->pre = NULL;
    }
};

void print_right(Node * head)
{

    Node * temp = head;

    while(temp != NULL)
    {

        cout<<temp->value<<" ";
        temp = temp->next;
    }
}

void print_left(Node * tail)
{

    Node * temp = tail;

    while(temp != NULL)
    {

        cout<<temp->value<<" ";
        temp = temp->pre;
    }
}

void print_reverse(Node * head, Node * tail)
{

    Node * i = head;
    Node * j = tail;

    while(i!=j && i->next != j)
    {

        swap(i->value,j->value);
        i = i->next;
        j = j->next;
    }
}

int main()

{

    // create a node

    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * tail = b;
    /*Node * c = new Node(40);
    Node * d = new Node(50);
    Node * e = new Node(60);*/

    // connecting the node

    head->next = a;
    a->pre = head;
    a->next = b;
    b->pre = a;


    // called the print function

    //print_reverse(head,tail);
    print_right(head);
    //print_left(tail);
}
