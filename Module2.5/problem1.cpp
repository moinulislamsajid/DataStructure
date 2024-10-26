#include<bits/stdc++.h>
using namespace std;


vector<int> vecCon(vector<int>&a,vector<int>&b)
{

    vector<int>c;

    for(int d : b)
    {
        c.push_back(d);
    }
    for(int f : a)
    {

        c.push_back(f);
    }

    return c;
}

int main()
{

    int n;
    cin>>n;

    vector<int>first(n);
    vector<int>sec(n);

    for(int i = 0; i<n; i++)
    {
        cin>>first[i];
    }

    for(int i = 0; i<n; i++)
    {
        cin>>sec[i];
    }

    vector<int>last = vecCon(first,sec);

    for(int p : last)
    {
        cout<<p<<" ";
    }
}
