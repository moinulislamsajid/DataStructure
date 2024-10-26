#include<bits/stdc++.h>

using namespace std;


class Node

{

public :

    int value;
    Node * next;
    Node * pre;

    Node(int value)

    {

        this->value = value;
        this->next = NULL;
        this->pre = NULL;
    }
};

void insert_last(Node * &head, Node * &tail ,int val)

{

    Node * newNode = new Node(val);

    if(tail == NULL)
    {

        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        tail->next = newNode;
        newNode->pre = tail;
        tail = tail->next;

    }


}

void print_right(Node * head) // O(N)
{

    Node * temp = head;

    while(temp != NULL)
    {

        cout<<temp->value<<" ";
        temp = temp->next;
    }

    cout<<endl;
}

void print_left(Node * tail) // O(N)
{

    Node * temp = tail;

    while(temp != NULL)
    {

        cout<<temp->value<<" ";
        temp = temp->pre;
    }

    cout<<endl;
}


int main()

{

    Node * head = NULL;
    Node * tail = NULL;

    int n;

    while(1)

    {

        cin>>n;

        if(n == - 1)

        {

            break;
        }
        else
        {

            insert_last(head,tail,n);
        }
    }

    print_right(head);
    print_left(tail);
}
