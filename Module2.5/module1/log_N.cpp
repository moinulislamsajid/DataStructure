#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n;
    cin>>n;

    /*while(n>0) // O(logN)
    {

        int dig = n%10;
        cout<<dig<<endl;
        n/=10;

    }*/


    for(int i = 1; i<=n; i*2) // O(log-N)
    {

        cout<<i<<endl;
    }





}
