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


void insert_Last(Node *&head,Node *&tail,int val)
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

void print_value(Node *head)
{

    Node * temp = head;
    while(temp != NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
}

void deleteAny(Node *head,int pos)
{

    Node *temp = head;

    for(int i=1; i<=pos-1; i++)
    {
        temp = temp->next;
    }

    Node * delN = temp->next;
    temp->next = temp->next->next;
    delete delN;

}


int main()
{

    Node *head = NULL;
    Node *tail = NULL;

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
            insert_Last(head,tail,val);
        }
    }

    print_value(head);

    deleteAny(head,3);

    cout<<"\nAfter delete element : ";

    print_value(head);

}
