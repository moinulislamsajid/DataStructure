#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    for(int i = 1; i<=n; i++) // O(N)
    {

        int x = i;
        while(x>0) // O(logN) -> total is O(NlogN)
        {
            int dig = x%10;
            cout<<dig<<" ";
            x/=10;
        }
        cout<<endl;
    }
}
