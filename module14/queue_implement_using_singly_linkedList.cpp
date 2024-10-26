#include<bits/stdc++.h>
using namespace std;

class Node
{

public :

    int value;
    Node * next;

    Node(int value)
    {

        this->value = value;
        this->next = NULL;
    }
};

class my_queue{

public :

    Node * head = NULL;
    Node * tail = NULL;
    int si = 0;

    void push(int val)
    {
        si++;
        Node *newNode = new Node(val);

        if(tail == NULL)
        {
            head = newNode;
            tail= newNode;
            return;
        }else
        {

            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop()
    {
        si--;

        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;

        if(head == NULL)
        {

            tail = NULL;
        }
    }

    int front1()
    {
        return head->value;
    }

    int size1()
    {

        return si;
    }

    bool empty1()
    {

        if(si==0){


            return true;
        }else
        {
            return false;
        }

    }

};

int main()

{

        my_queue que;

        que.push(10);
        que.push(20);
        que.push(30);
        que.push(40);

        cout<<que.front1()<<endl;

        // delete any element

        que.pop();

        cout<<que.front1()<<endl;

        int n;

        for(int i = 0; i<5; i++)
        {
            cin>>n;
            que.push(n);
        }

        while(que.empty1() == false)
        {


            cout<<obj.front1()<<endl;
            obj.pop();
        }

}
