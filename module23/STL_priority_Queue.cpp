#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int>pq; // -> max heap

    while(true)
    {
        int c;
        cin>>c;

        // 0 for push

        if(c == 0)
        {
            int x;
            cin>>x;
            pq.push(x);

        }

        // 1 for pop

        else if(c == 1)
        {
            pq.pop();
        }
        // for show value
        else if(c == 2)
        {
            cout<<pq.top()<<endl;
        }
        else
        {
            break;

        }
    }
}
