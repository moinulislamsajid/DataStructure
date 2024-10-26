#include<bits/stdc++.h>
using namespace std;

class MyStack
{
public :

    vector<int>stk;

   void push(int val)
   {
       stk.push_back(val);
   }
   void pop()
   {
       stk.pop_back();
   }
   int top()
   {
       return stk.back();
   }
   int size_get()
   {

       return stk.size();
   }

   bool empty_get()
   {
       if(stk.size() == 0)
       {
           return true;
       }else
       {
           return false;
       }
   }
};
int main()
{

    MyStack st;

    st.push(10);
    st.push(20); // -> create a stack to find out the value

    cout<<st.top()<<endl;

    // using pop operation

    st.pop();

    // now find out the value of top

     cout<<st.top()<<endl;

     // using pop operation

     st.pop();

    // now again to find the top now we got value


    if(st.empty_get() == false)
    {

            cout<<st.top()<<endl;

    }

    MyStack myst;

    int n;
    cout<<"Enter size of Stack : ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        myst.push(x);

    }

    while(myst.empty_get() == false)
    {

        cout<<myst.top()<<" ";
        myst.pop();
    }


}
