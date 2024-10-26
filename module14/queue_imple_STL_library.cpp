#include<bits/stdc++.h>
using namespace std;

class Myqueue
{
public :

    list<int> List;

    void push(int val)
    {

        List.push_back(val);
    }

    void pop()
    {
        List.pop_front();
    }
    int front_()
    {
        return List.front();
    }
    int size_()
    {
        return List.size();
    }

    bool em()
    {

        return List.empty();
    }


};


int main()
{

    Myqueue d;

    d.push(3);
    d.push(31);
    d.push(36);

    cout<<d.front_()<<endl;

    d.pop();
    d.pop();

    cout<<d.front_()<<endl;

    Myqueue y;

    int n;
    cout<<"Enter the size of queue : ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int f;
        cin>>f;
        y.push(f);
    }

    // print the queue

    while(!y.em())
    {
        cout<<y.front_()<<" ";
        y.pop();
    }


}
