#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>st;
    st.push(10);
    st.push(20);

    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    st.pop();

    stack<int>mySt;

    int n;
    cout<<"\nEnter the size of Stack : ";
    cin>>n;

    for(int i = 0; i<n; i++)
    {
        int x;
        cin>>x;
        mySt.push(x);
    }

    while(!mySt.empty())
    {

        cout<<mySt.top()<<" ";
        mySt.pop();
    }
}
