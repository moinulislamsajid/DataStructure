#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sz;
    cin >> sz;

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i =0;i< sz;i++)
    {
        int v;
        cin>>v;
        pq.push(v);
    }

    int q;
    cin>>q;

    while(q--)
    {
        int cmd;
        cin>>cmd;

        if (cmd == 0)
        {
            int x;
            cin >> x;
            pq.push(x);
            cout<< pq.top()<< endl;
        }
        else if (cmd == 1)
        {
            if (!pq.empty())
            {
                cout<<pq.top()<<endl;
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }
        else if (cmd == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                {
                    cout<<pq.top()<< endl;
                }
                else
                {
                    cout<<"Empty"<<endl;
                }
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }
    }

    return 0;
}
