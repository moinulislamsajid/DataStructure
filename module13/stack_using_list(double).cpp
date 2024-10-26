#include<bits/stdc++.h>
using namespace std;

class MyStack

{

public :

    list<int>mylist;

    void push(int val)
    {
        mylist.push_back(val);
    }
    void pop()
    {
        mylist.pop_back();
    }
    int top()
    {
        return mylist.back();
    }

    int size_get()
    {
        return mylist.size();
    }

    bool empty_get()
    {
        if(mylist.size() == 0)
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
    MyStack myst;

    myst.push(44);
    myst.push(40);

    cout<<myst.top();
    if(myst.empty_get() == false)
    {
        myst.pop();
    }

    int n;
    cout<<"Enter the size of stack ";
    cin>>n;

    for(int i = 0; i<n; i++)
    {
        int x;
        cin>>x;

        myst.push(x);
    }

    while(!myst.empty_get())
    {
        cout<<myst.top()<<" ";
        myst.pop();
    }

    // when ever delete



}
