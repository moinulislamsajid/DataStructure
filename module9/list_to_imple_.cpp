#include<bits/stdc++.h>
using namespace std;

int main()
{

    // create a list

    list<int> mylist;

    cout<<mylist.size()<<endl;

    // list with size

    list<int>list1(5);
    cout<<list1.size()<<endl;

    // size with initial value

    list<int>list2(5,2);

    for(int i : list2)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    // using iterator for print

    list<int>ll(5,1);

    for(auto it = ll.begin(); it!=ll.end(); it++)
    {

        cout<<*it<<" ";
    }
    cout<<endl;

    // hold another list

    list<int>vList={1,2,3,4,5};
    list<int>rList(vList);

    for(auto it = rList.begin(); it!=rList.end(); it++)
    {

        cout<<*it<<" ";
    }

    cout<<endl;

    // retain value form arrays

    int arr[5] ={5,20,24,42,85};

    list<int>arList(arr,arr+5);
    for(int i : arList)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // vector retain

    vector<int> v = {8,6,8,6};

    list<int>vLi(v.begin(),v.end());

    for(int i : vLi)
    {
        cout<<i<<" ";
    }
    cout<<endl;

}
