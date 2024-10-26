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

void deleteFirst(Node *&head)
{
    if(head == NULL)
    {
        cout<<"Linked List is Empty";
        return;
    }
    else
    {
        Node * delN = head;
        head = head->next;
        delete delN;
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
            insert_Last(head,tail,val);
        }
    }

    // print the value

    print_value(head);

    deleteFirst(head);

    cout<<"\nAfter Delete Node : ";

      print_value(head);

}
