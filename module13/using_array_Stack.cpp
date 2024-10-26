#include<bits/stdc++.h>
using namespace std;

class myStack
{
public :

    vector<int>v;

    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }

    int top()
    {
        return v.back();
    }

    int stackSize()
    {
        return v.size();
    }

    bool stackEmpty()
    {
        if(v.size() == 0)
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
