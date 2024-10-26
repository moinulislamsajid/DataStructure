#include<bits/stdc++.h>

using namespace std;

int main()

{

    list<int> mylist = {10,20,30,40}; // this is direct initial

    // to get the size
    cout<<mylist.size();

    // to get the max size

    //cout<<mylist.max_size();

    // to show all value

    for(int i : mylist)
    {

        cout<<i<<" ";
    }

    // to get the clear

    // mylist.clear();

    // resize

    mylist.resize(10);

    for(int i : mylist)
    {

        cout<<i<<" ";
    }
}
