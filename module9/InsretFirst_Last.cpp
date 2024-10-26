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


void insertFirst(Node* &head,Node* &tail,int val)
{

    Node* newNode = new Node(val);

    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    head->prev = newNode;
    newNode->next = head;
    head = newNode;


}

void insertLast(Node* &head,Node* &tail,int val)
{

    Node* newNode = new Node(val);

    if(head == NULL)
    {

        head = newNode;
        tail = newNode;
        return;
    }else
    {


    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;

    }



}


void insertAnyPos(Node* head,int pos, int val)
{


    Node* newNode = new Node(val);
    Node* temp = head;

    for(int i = 1; i<=pos -1; i++)
    {

        temp = temp->next;
    }

    newNode->next = temp->next;

    if(temp->next != NULL)
    {

            temp->next->prev = newNode;


    }
    temp->next = newNode;
    newNode->prev = temp;

}

void print_R(Node* &head)
{
    Node* temp = head;

    while(temp != NULL)
    {

        cout<<temp->value<<"->";
        temp = temp->next;
    }

    cout<<endl;

}

void print_L(Node* tail)
{

    Node* temp = tail;

    while(temp != NULL)
    {

        cout<<temp->value<<"->";
        temp = temp->prev;


    }

    cout<<endl;

}

int main()
{

    Node* head = NULL;
    Node* tail = NULL;

    int val;

    while(true)

    {

        cin>>val;

        if(val == -1)
        {

            break;
        }else
        {

          insertLast(head,tail,val);

        }


    }

    // called the insert first and last method

    insertFirst(head,tail,99);
    insertLast(head,tail,88);
    insertAnyPos(head,2,0);

    // called the print function

    print_R(head);
    print_L(tail);


}
