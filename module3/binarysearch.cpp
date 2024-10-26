#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num[n];


    for(int i=0; i<n; i++)
    {
        cin>>num[i];
    }

    int key;
    cin>>key;

    int pos,ans = 0;

    for(int i=0; i<n; i++)
    {
        if(num[i] == key)
        {
            ans=1;
            pos = i;
            break;
        }
    }

    if(ans == 1)
    {
        cout<<pos<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }

    return 0;
}
