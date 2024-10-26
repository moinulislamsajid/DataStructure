#include<bits/stdc++.h>
using namespace std;


class my_stack
{
    public :
    stack<int> stK;

    void get_Input(int n)
    {
        int val;
        for(int i = 0; i<n; i++)
        {
            cin>>val;
            stK.push(val);
        }
    }



    void rem_Value()
    {
        stK.pop();
    }


};

int main()

{

    int n;
    cin>>n;

    my_stack obj;

    obj.get_Input(n);

    while(!stK.empty())
    {

        cout<<stK.front()<<endl;
        stK.pop();
    }
}
