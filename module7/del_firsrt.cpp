#include<bits/stdc++.h>
using namespace std;

class Node
{

public :

    int value;
    Node* next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }

};

void insert_last(Node* &head,Node* &tail,int val)
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
        tail = newNode;

    }


}

void print(Node *head)
{



    Node* temp = head;

    while(temp != NULL)
    {

         cout<<temp->value<<" ";
         temp = temp->next;
    }

    cout<<endl;
}

void delete_first(Node * &head)
{

    if(head == NULL)
    {

        cout<<"The set is empty";
        return;
    }else
    {

      Node* delN = head;
      head = head->next;
      delete delN;

    }


}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;


    int val;

    while(1)
    {
        cin>>val;

        if(val == -1)
        {

            break;
        }else
        {

            insert_last(head,tail,val);

        }

    }


    // called the print method

    print(head);

    delete_first(head);

    print(head);
}
