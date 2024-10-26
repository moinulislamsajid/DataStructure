#include<bits/stdc++.h>
using namespace std;

class Node{

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

void sorted(Node *head) {
    for (Node *i = head; i != NULL; i = i->next) {   // outer loop
        for (Node *j = i->next; j != NULL; j = j->next) {  // inner loop
            if (i->value > j->value) {
                std::swap(i->value, j->value);  // using std::swap to swap values
            }
        }
    }
}


int main()

{
    Node* head = NULL;
    Node* tail = NULL;

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

           insert_tail(head,tail,n);

        }
    }

    sorted(head);
    print_right(head);
    //print_left(tail);


}
