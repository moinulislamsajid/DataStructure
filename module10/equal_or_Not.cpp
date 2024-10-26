#include<bits/stdc++.h>
using namespace std;

class Node
{

public:
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

void insert_tail(Node * &head,Node * &tail,int val)
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

void print_right(Node * head)

{

    Node * temp = head;

    while(temp != NULL)
    {

        cout<<temp->value<<" ";
        temp = temp->next;
    }

    cout<<endl;
}

void print_left(Node * tail)

{

    Node * temp = tail;

    while(temp != NULL)
    {

        cout<<temp->value<<" ";
        temp = temp->pre;
    }

    cout<<endl;
}

void same(Node * head1 , Node * head2)
{

    while(head1 != NULL && head2 != NULL)
    {

        if(head1->value != head2->value)
        {
            cout<<"NO";
            return;
        }

        head1 = head1->next;
        head2 = head2->next;

    }

    if(head1 == NULL && head2 == NULL)
    {

        cout<<"YES";

    }else{

        cout<<"NO";

    }


}



int main()

{
    Node * head1 = NULL;
    Node * tail1 = NULL;

    Node * head2 = NULL;
    Node * tail2 = NULL;

    int n;

    while(1)
    {

        cin>>n;

        if(n==-1)
        {
            break;
        }
        else
        {

            insert_tail(head1,tail1,n);
        }

    }

     while(1)
    {

        cin>>n;

        if(n==-1)
        {
            break;
        }
        else
        {

            insert_tail(head2,tail2,n);
        }

    }

    // print_right(head);
    //print_left(tail);

    same(head1,head2);

}

