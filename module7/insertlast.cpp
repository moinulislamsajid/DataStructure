#include<bits/stdc++.h>
using namespace std;

class Node
{

public :

    int value;
    Node * next;

    // create a constructor to initial the value

    Node(int value)
    {

        this->value = value;
        this->next = NULL;
    }
};

void print(Node * head)
{

    Node * temp = head;

    while(temp != NULL)
    {

        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertlast(Node * &head, Node * &tail,int val)

{

    Node * newNode = new Node(val);

    if(head == NULL)
    {

        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;

}

int main()

{

    //  create a node dynamically

    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * d = new Node(50);
    Node * e = new Node(60);

    Node * tail = e;

    // now connected the node

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    // called the print method

    insertlast(head,tail,1000);

    print(head);
}

