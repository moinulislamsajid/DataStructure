#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

     vector<int>v(n);
     unordered_set<int>a;

     for(int i = 0; i<n; i++)
     {

         cin>>v[i];
         a.insert(v[i]);
     }

    int coun = 0;

    for(int i=0; i<n; i++)
    {
        if(a.find(v[i] + 1) != a.end())
        {

            coun++;
        }
    }

    cout<<coun<<endl;
}
