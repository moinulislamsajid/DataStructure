#include<bits/stdc++.h>
using namespace std;

int main()

{

    int n;
    cin>>n;

    for(int i = 1; i<=n; i++)

    {
        // retain the value of i in x

        int x = i;

        while(x>0)
        {

            int digit = x%10;
            cout<<digit<<" ";
            x/=10;
        }

        cout<<endl;

    }
}
