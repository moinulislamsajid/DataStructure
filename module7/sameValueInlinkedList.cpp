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

        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void same(Node * head1, Node * head2)
{
    int flag = 0;
    while(head1 != NULL &&  head2 != NULL)

    {

        if(head1->value == head2->value)
        {

            flag = 1;
        }

        head1 = head1->next;
        head2 = head2->next;
    }

    if(flag == 1)
    {

        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;

    }
}

int main()
{


    Node * head1 = NULL;
    Node * tail1 = NULL;

    Node * head2 = NULL;
    Node * tail2 = NULL;

    int val1;


        while(1)
        {
            cin>>val1;
            if(val1==-1)
            {

                break;
            }
            else
            {

                insertlast(head1,tail1,val1);
            }
        }

        while(1)
        {

            cin>>val1;

            if(val1 == -1)
            {

                break;
            }
            else
            {

                insertlast(head2,tail2,val1);
            }
        }

       same(head1,head2);

    }




