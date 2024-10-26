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

void insert_tail(Node * &head, Node * &tail,int val)

{

    Node * newNode = new Node(val);

    if(tail == NULL)
    {

        head = newNode;
        tail = newNode;
        return;
    }else
    {

        tail->next = newNode;
        newNode->pre = tail;
        tail = tail->next;

    }




}

bool palimdrome(Node * &head, Node * &tail)

{
    Node * i = head;
    Node * j = tail;



    while(i!=j && i->next!=j)
    {
        if(i->value != j->value)
        {

            return false;
        }

        i = i->next;
        j = j->pre;
    }

    if(i!=j && i->value != j->value)
    {

        return false;
    }

    return true;



}


int main()


{

    Node * head = NULL;
    Node * tail = NULL;

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

            insert_tail(head,tail,n);
        }
    }

    if(palimdrome(head,tail))
    {
        cout<<"YES";
    }
    else
    {

        cout<<"NO";
    }
}
