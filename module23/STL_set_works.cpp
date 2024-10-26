#include<bits/stdc++.h>
using namespace std;

int main()
{

    set<int> s; // set works on binary search tree
    int n;
    cin>>n;

    for(int i = 0; i<n; i++)
    {
        int x;
        cin>>x;
        s.insert(x);  // O(logN)
    }

    // print the set value

    for(auto it = s.begin(); it!=s.end(); it++)
    {
        cout<<*it<<" ";
    }

    // value is retain or not

    if(s.count(11))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
