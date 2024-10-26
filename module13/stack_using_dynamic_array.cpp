#include<bits/stdc++.h>
using namespace std;

class my_stack
{
public :

    vector<int> v;

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

    int stack_size()
    {
        return v.size();
    }

    bool stack_empty()
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

    my_stack st;

    st.push(10);

    if(st.stack_empty() != true)
    {
        st.push(1);
        st.push(11);
        st.push(111);

        cout<<st.top()<<endl;
    }
}
