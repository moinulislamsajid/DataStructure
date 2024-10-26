#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;

    int n;
    cin>>n;

    for(int i = 0; i<n; i++)
    {

        int x;
        cin>>x;
        v.push_back(x);
    }

    // using for each loop for print

    for(int p : v)
    {

        cout<<p<<" ";
    }

    // another to input the value

    int f;
    cout<<"Enter the size of vector : ";
    cin>>f;
    vector<int>k(f);
    for(int i = 0; i<f; i++)

    {
        cin>>k[i];
    }

    cout<<"Vector  element : ";
    for(int h : k)
    {
        cout<<h<<" ";
    }
}
