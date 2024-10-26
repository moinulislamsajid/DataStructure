#include<bits/stdc++.h>
using namespace std;

class Node
{
public :

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


    // using bubble sort

    for(Node * i =head; i->next != NULL ; i= i->next)
    {
        for(Node * j = i->next; j!=NULL; j= j->next)
        {
            if(i->value > j->value)
            {
                swap(i->value,j->value);
            }
        }
    }

    print_Node(head);
}