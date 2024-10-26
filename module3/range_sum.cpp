#include<bits/stdc++.h>
using namespace std;

int main()

{

    long long n,q;
    cin>>n>>q;

    long long number[n];

    for(int i = 0; i<n; i++)
    {

        cin>>number[i];
    }

    long long pre[n];

    pre[0] = number[0];

    for(int i = 1; i<n; i++)
    {
        pre[i] = number[i] + pre[i-1];
    }

    while(q--)

    {
        long long s,u;

        cin>>s>>u;

        s--;
        u--;

        long long sum = 0;

        if(s == 0)
        {
            sum = pre[u];
        }
        else
        {
            sum = pre[u] - pre[s-1];
        }

        cout<<sum<<endl;
    }
}
