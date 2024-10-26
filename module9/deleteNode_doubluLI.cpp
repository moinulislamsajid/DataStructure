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



int size_(Node * head)
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

void delete_any(Node * head, int pos)

{

    Node * temp = head;

    for(int i = 1; i<=pos - 1; i++)
    {

        temp = temp->next;
    }

    Node * delN = temp->next;
    temp->next = temp->next->next;
    temp->next->pre = temp;
    delete delN;


}

void delete_tail(Node * &tail)
{

    Node * delN = tail;
    tail = tail->pre;
    delete delN;
    tail->next = NULL;
}

void dele_first(Node * &head)
{

    Node * delN = head;
    head = head->next;
    delete delN;
    head->pre = NULL;
}

int main()

{

    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * tail = c;

    head->next = a;
    a->pre = head;
    a->next = b;
    b->pre = a;
    b->next = c;
    c->pre = b;


    int p;
    cin>>p;


    if(p >= size_(head))

    {
        cout<<"Invalid";
    }
    else if(p== 0)
    {

        dele_first(head);
    }
    else if(p == size_(head) - 1)
    {
        delete_tail(tail);
    }
    else

    {

            delete_any(head,p);
    }


    print_right(head);
    print_left(tail);

}

