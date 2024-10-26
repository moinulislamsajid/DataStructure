#include<bits/stdc++.h>
using namespace std;

class Node
{

public :

    int value;
    Node * next;

    // create a constructor

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
}

void insertFirst(Node * &head , int val)
{

    Node * newNode = new Node(val);

    if(head == NULL)
    {

        cout<<"Set is Empty";
        return;
    }

    //Node * hedTem = head;
    newNode->next = head;
    head = newNode;

   // delete hedTem;

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

    insertFirst(head,1000);
    print(head);


}
