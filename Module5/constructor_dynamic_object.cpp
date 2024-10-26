#include<bits/stdc++.h>
using namespace std;

class Node
{
public:

    int value;
    Node * next;

    // create a constructor to initial the value

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};


int main()
{

    // create a object as a dynamic why

    Node * head = new Node(10);
    Node * a = new Node(20);

    head->next = a;


    // print without dereference

    cout<<head->value<<" "<<head->next->value<<endl;

}
