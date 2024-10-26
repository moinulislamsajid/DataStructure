#include<bits/stdc++.h>
using namespace std;

class Node{

public :

    int value;
    Node* next;

    // create a constructor to initial the value

    Node(int value)
    {

        this->value = value;
        this->next = NULL;
    }



};

void print(Node * head)
{

    Node *  temp = head;

    while(temp != NULL)
    {

        cout<<temp->value <<" ";
        temp = temp->next;
    }

    cout<<endl;


}

int main()
{


    // static what to create node

    /*Node a,b;

    a.value = 10;
    b.value = 20;

    a.next = &b;*/

    // create node dynamic why

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    cout<<(*head).value; // you need to dereference

    // connecting node

    cout<<endl;

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    cout<<a->next->value<<endl;

    // called the function

    print(head);




}
