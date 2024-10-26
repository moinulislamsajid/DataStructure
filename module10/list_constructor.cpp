#include<bits/stdc++.h>
using namespace std;


int main()
{

    list<int> myList;

    cout<<myList.size()<<endl;
    myList.insert()
    // list with size
    list<int> mylist(10);
    cout<<mylist.front()<<endl;

    // list with size and value

    list<int> myl(10,5);

    // for print we use iterator

    for(auto it = myl.begin(); it!= myl.end(); it++)
    {

        // for print iterator using

        cout<< *it << endl;
    }

    // using arrays pointer

    int num[] = {10,20,30,40};

    list<int> myL(num,num+4);

    for(auto i = myL.begin(); i != myL.end(); i++)
    {

        cout<< *i <<" ";
    }

    // using vector

    vector<int> num1 = {10,20,30};

    list<int> hh(num1.begin(), num1.end());

    for(auto i = myL.begin(); i != myL.end(); i++)
    {

        cout<< *i <<" ";
    }

}
