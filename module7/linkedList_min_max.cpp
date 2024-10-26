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


int getmax(Node * head)
{

    int max1 = INT_MIN;

    Node * temp = head;

    while(temp != NULL)
    {

        if(temp->value > max1)
        {

            max1 = temp->value;
        }
        temp = temp->next;
    }

    return max1;
}

int get_min(Node * head)
{

    int min1 = INT_MAX;

    Node * temp = head;

    while(temp != NULL)
    {

        if(min1 > temp->value)
        {

            min1 = temp->value;
        }

        temp= temp->next;
    }

    return min1;
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
   // print(head);
    //min_max(head);

    if(head == NUll)
    {

        cout<<0<<endl;
        return 0;
    }

    int value = getmax(head);
    int value1 = get_min(head);
    int diff = value - value1;
    cout<<diff<<endl;
}
