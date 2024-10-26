#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>mylist;
    cout<<"Size : "<<mylist.size()<<endl;

    cout<<"Maximum size : "<<mylist.max_size()<<endl;

    list<int>he = {1,2,3,5,8,9};
    he.resize(3);
    he.resize(7);

    for(int h : he)
    {
        cout<<h<<" ";
    }

   // he.clear();


}
