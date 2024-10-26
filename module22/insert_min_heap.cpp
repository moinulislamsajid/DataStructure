#include<bits/stdc++.h>
using namespace std;

int main()
{
    // create dynamic vector

    vector<int>v;

    int sz;
    cout<<"Enter you array size : ";
    cin>>sz;

    for(int i = 0; i<sz; i++)
    {
        int val;
        cin>>val;
        v.push_back(val);

        int curr = v.size() - 1;

        while(curr != 0)
        {
            int pr = (curr - 1)/2;

            if(v[pr] > v[curr])
            {
                swap(v[pr],v[curr]);
            }
            else
            {
                break;
            }
            curr = pr;
        }
    }

    // print the value

    for(int n : v)
    {
        cout<<n<<" ";
    }
}
