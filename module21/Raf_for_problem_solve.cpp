#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v = {1,2,3,4,5,6};

   sort(v.begin(),v.end(),greater<int>());

   for(int i = 0; i<v.size() - 1; i++)
   {
       cout<<i<<" ";
   }

}
