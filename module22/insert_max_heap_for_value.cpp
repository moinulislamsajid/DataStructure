#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int si;
    cin>>si;
    for(int i = 0; i<si; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        int ci = v.size() - 1;

        while(ci != 0)
        {
            int pi = (ci - 1)/2;

            if(v[pi] < v[ci])
            {
                swap(v[pi],v[ci]);
            }
            else
            {
                break;
            }
            ci = pi;
        }
    }

    // print the value

    for(int h : v)
    {
        cout<<h<<" ";
    }
}
