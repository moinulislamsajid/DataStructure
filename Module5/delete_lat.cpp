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

void insert_last(Node *&head,Node *&tail,int val)
{

    Node *newNode = new Node(val);

    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }

}

void print_Node(Node *head)
{
    Node *temp = head;

    while(temp != NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
}

void deleteLast(Node *head)
{

    // if linked list is empty

    if(head == NULL)
    {
        cout<<"Linked List is Empty";
        return;
    }

    // if linked list have only one element

    if(head->next == NULL)
    {

        head = NULL;
        return;
    }

    Node * secLast = head;
    Node * last = secLast->next;

    while(last->next != NULL)
    {
        secLast = secLast->next;
        last = last->next;
    }

    secLast->next = NULL;

}


int main()
{

    Node * head = NULL;
    Node * tail = NULL;

    int val;

    while(true)
    {
        cin>>val;

        if(val == -1)
        {
            break;
        }
        else
        {
            insert_last(head,tail,val);
        }
    }

    // called the print function

    print_Node(head);

    // called deleted last element

    deleteLast(head);

    // now again called print function

    print_Node(head);
}
