#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n;
    cin>>n;

    for(int i = 0; i<n; i++) // nested loop O_(n2)
    {

        for(int j = 0; j<=i; j++)
        {

            cout<<"*";
        }

         cout<<"\n";
    }




}
