#include<bits/stdc++.h>
using namespace std;

class Node
{
public :

    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_Last(Node * &head,Node* &tail,int val)
{

    Node* newNode = new Node(val);

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

// print using recursion

void print(Node *head)
{
    if(head == NULL)
    {
        return;
    }
    cout<<head->value<<" "<<endl;
    print(head->next);
}

void rec_print(Node *head)
{
    if(head == NULL)
    {
        return;
    }
    rec_print(head->next);
    cout<<head->value<<" "<<endl;


}

void print_value(Node * head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
}

void print_reverse(Node * &head,Node *curr)
{

    if(curr->next == NULL)
    {

        head = curr;
        return;
    }
    print_reverse(head,curr->next);
    curr->next->next = curr;
    curr->next = NULL;


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

    print_reverse(head,head);
    print_value(head);
   // rec_print(head);
}
