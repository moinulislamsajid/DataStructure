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

void print_rec(Node * head)

{

    if(head == NULL)
    {

        return;
    }else
    {

        print_rec(head->next);
        cout<<head->value<<" ";


    }
}

int main()


{


    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * d = new Node(50);
    Node * e = new Node(60);

    // connecting the node

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;


    print_rec(head);
}
