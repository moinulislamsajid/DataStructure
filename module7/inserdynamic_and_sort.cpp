#include<bits/stdc++.h>

using namespace std;

class Node
{

public:
    int value;
    Node * next;

    // create a constructor

    Node(int value)
    {

        this->value = value;
        this->next = NULL;
    }
};

void insertlast(Node * &head, Node * &tail, int val)
{

    Node * newNode = new Node(val);

    if(head == NULL)
    {

        head = newNode;
        tail = newNode;
    }

     tail->next = newNode;
     tail = newNode;
}

void print(Node * head)
{

    Node * temp = head;

    while(temp != NULL)
    {

        cout<<temp->value<<"->";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{


    Node * head = NULL;
    Node * tail = NULL;

    int val1;

    while(1)
    {
        cin>>val1;
        if(val1==-1)
        {

            break;
        }
        else{

            insertlast(head,tail,val1);
        }
    }

    // sorted the value

    for(Node * i = head; i->next != NULL; i= i->next)
    {

        for(Node * j = i->next; j!=NULL; j = j->next)
        {

            if(i->value > j->value)
            {

                swap(i->value, j->value);
            }
        }
    }

    print(head);
}
