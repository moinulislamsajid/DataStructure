#include<bits/stdc++.h>
using namespace std;

class Node
{
public:

    int value;
    Node * next;
    Node * prev;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myQueue
{
    public :

    Node *head = NULL;
    Node *tail = NULL;
    int sx = 0;

    void push(int val)
    {
        sx++;
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


    void pop()
    {
        sx--;
        Node *delN = head;
        head = head->next;
        head->prev = NULL;
        delete delN;


    }

    int top()
    {
       return head->value;
    }

    int stackSize()
    {
        return sx;
    }

    bool queueEmpty()
    {
        if(sx == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    int n;
    cin>>n;

    myQueue que;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        que.push(x);
    }

    while(!que.queueEmpty())
    {

        cout<<que.top()<<endl;
        que.pop();
    }
}
