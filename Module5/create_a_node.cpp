#include<bits/stdc++.h>
using namespace std;

class Node
{
public :

    int value;
    Node * next;

    /*Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }*/


};



int main()
{

    Node a,b;
    a.value = 10;
    b.value = 20;

    // connected to the node

    a.next = &b;

    cout<<a.value<<endl;
    //cout<<b.value<<endl;

    // without using b value

    cout<<(*a.next).value<<endl;

}
