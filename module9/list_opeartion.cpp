#include<bits/stdc++.h>
using namespace std;

int main()
{

    list<int>mylist={1,2,3,4,2,56,2,5,2};

    mylist.remove(2);

    for(int k : mylist)
    {
        cout<<k<<" ";
    }

    cout<<endl;

    // sorting ascending

    list<int>sList = {56,2,1,0,3,5};
    sList.sort();

    for(int h : sList)
    {
        cout<<h<<" ";
    }
    cout<<endl;

    // descending order

    list<int>decList={1,2,1,42,4,22,4,5};

    decList.sort(greater<int>());

    for(int h : decList)
    {
        cout<<h<<" ";
    }
    cout<<endl;

    // find the unique value

    list<int>uni= {1,2,3,3,4,5,5};
    uni.unique(); // using sorting value

    for(int h : uni)
    {
        cout<<h<<" ";
    }
    cout<<endl;

    // using reverse

    list<int>rev={2,4,5,3,1,4,5,2,35};
    rev.reverse();
    for(int h : rev)
    {
        cout<<h<<" ";
    }
    cout<<endl;

    cout<<rev.front()<<endl;
    cout<<rev.back()<<endl;
    cout<<*next(rev.begin(),5);
}
