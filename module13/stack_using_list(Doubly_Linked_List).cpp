#include<bits/stdc++.h>
using namespace std;

class myStack
{
public :

    list<int>l;

    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }

    int top()
    {
        return l.back();
    }

    int stackSize()
    {
        return l.size();
    }

    bool stackEmpty()
    {
        if(l.size() == 0)
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

    myStack st;


    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }

    while(!st.stackEmpty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }

}
