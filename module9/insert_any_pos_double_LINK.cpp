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

void insert_any(Node * head, int pos, int val) // O(N)

{

    Node * newNode = new Node(val);
    Node * temp = head;

    for(int i = 1; i<= pos - 1; i++)
    {
        temp = temp->next;

    }
    newNode->next = temp->next;
    temp->next = newNode;

    // previous connection

    newNode->next->pre = newNode;
    newNode->pre = temp;
}

void insert_first(Node * &head, Node * &tail , int val) // O(1)

{

    Node * newNode = new Node(val);

    if(head == NULL)
    {

        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->pre = newNode;
    head = newNode;
}

void insert_tail(Node * head , Node * &tail, int val)

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



    int pos,val;
    cin>>pos>>val;


    if(pos > size_(head))
    {
        cout<<"Invalid";
    }
    else if( pos == 0)
    {

        insert_first(head,tail,val);
    }
    else if( pos == size_(head))
    {

        insert_tail(head,tail,val);
    }
    else{

        insert_any(head,pos,val);
    }



    print_right(head);
    print_left(tail);

}
