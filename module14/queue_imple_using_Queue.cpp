#include<bits/stdc++.h>
using namespace std;

int main()
{

    queue<int> que;


    int n;
    cout<<"Enter the size of queue : ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int f;
        cin>>f;
        que.push(f);
    }

    while(!que.empty())
    {
        cout<<que.front()<<" ";
        que.pop();
    }

}
