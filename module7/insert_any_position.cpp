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

void insert1(Node * head, int val, int pos)
{

    // create a new node

    Node * newNode = new Node(val);

    Node * temp = head;

    for(int i = 1; i<=pos - 1; i++)
    {

        temp = temp->next;
    }

    newNode->next= temp->next;
    temp->next = newNode;
}

int size(Node * head)
{

    Node * temp = head;

    int count1 = 0;

    while(temp != NULL)
    {

        count1++;
        temp = temp->next;
    }

    return count1;
}

int main()
{

    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * d = new Node(50);
    Node * e = new Node(60);

    // connecting the node

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;


    int val,pos;

    cin>>val;
    cin>>pos;

    if(pos > size(head))
    {

        cout<<"Invalid Postion";
    }else
    {


        insert1(head,val,pos);

        print(head);

    }


}
