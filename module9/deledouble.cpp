 #include<bits/stdc++.h>
using namespace std;

class Node

{
    public :
    int value;
    Node* next;
    Node* prev;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }

};

void insertLast(Node* &head,Node* &tail,int val)
{

    Node* newNode = new Node(val);

    if(head == NULL)
    {

        head = newNode;
        tail = newNode;
        return;
    }
    else
    {

      tail->next = newNode;
      newNode->prev = tail;
      tail = newNode;


    }


}

void print_Right(Node* head)
{



    Node * temp = head;

    while(temp != NULL)
    {

        cout<<temp->value<<"->";
        temp = temp->next;

    }

    cout<<endl;


}


void print_Left(Node* tail)
{

    Node *temp = tail;

    while(temp != NULL)
    {

        cout<<temp->value<<"->";
        temp = temp->prev;
    }
    cout<<endl;


}

void deleteFirst(Node* &head)
{

    Node* del = head;
    head = head->next;
    delete del;
    head->prev = NULL;
}

void deleteLast(Node* &tail)
{

    Node* delN = tail;
    tail = tail->prev;
    delete delN;
    tail->next = NULL;


}

void insertAny(Node* head,int pos)
{

    Node* temp = head;

    for(int i = 1; i<=pos - 1; i++)
    {

        temp = temp->next;
    }

    Node* delN = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete delN;

}

int main()
{

    Node* head = NULL;
    Node* tail = NULL;

    int val;

    while(true)
    {

        cin>>val;

        if(val == -1)
        {

            break;
        }
        else
        {

            insertLast(head,tail,val);
        }
    }

    // called the delete function

    deleteFirst(head);
    deleteLast(tail);

    // called the print function

    print_Right(head);
    print_Left(tail);


}
