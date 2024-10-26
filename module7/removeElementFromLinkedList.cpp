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

void insertTail(Node * &head, Node * &tail, int val)
{

    Node * newNode = new Node(val);

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

void print(Node * head)
{

    Node * temp = head;

    while(temp != NULL)
    {

         cout<<temp->value<<" ";
         temp = temp->next;
    }

    cout<<endl;
}



void removeDup(Node *head)
{
    Node *temp = head;

    while (temp != NULL && temp->next != NULL)
    {
        Node *temp1 = temp;

        while (temp1->next != NULL)
        {
            if (temp->value == temp1->next->value)
            {
                Node *temp3 = temp1->next;
                temp1->next = temp1->next->next;
                delete temp3;
            }
            else
            {
                temp1 = temp1->next;
            }
        }

        temp = temp->next;
    }
}


int main()
{

    Node * head = NULL;
    Node * tail = NULL;

    int n;

    while(1)
    {

        cin>>n;

        if(n == -1)
        {

            break;
        }
        else
        {

            insertTail(head,tail,n);
        }
    }


    removeDup(head);
    print(head);

}
