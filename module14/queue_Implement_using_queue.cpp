#include<bits/stdc++.h>
using namespace std;

int main()
{

    queue<int> myq;

    int n;

    for(int i = 0; i<5; i++)
    {
        cin>>n;
        myq.push(n);

    }

    while(!myq.empty())
    {
        cout<<myq.front()<<endl;
        myq.pop();
    }
}
