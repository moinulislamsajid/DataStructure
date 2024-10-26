#include<bits/stdc++.h>

using namespace std;

class Node
{
    public:

    int value;
    Node * next;

    Node(int value)
    {

        this->value = value;
        this->next = NULL;
    }

};

void inser_any(Node * head, int pos , int val)
{

    Node * newNode = new Node(val);
    Node * temp = head;

    for(int i = 1; i<=pos - 1; i++)
    {

        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void print(Node * head)
{

     Node * temp = head;

     while(temp != NULL)
     {

         cout<<temp->value<<" ";
         temp = temp->next;

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

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    inser_any(head,2,1000);
    print(head);

}
