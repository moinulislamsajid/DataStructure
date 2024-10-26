#include<bits/stdc++.h>

using namespace std;

int main()

{


    list<int> myList = {10,20,301,10,40,10,50};
    myList.remove(10);
    cout<<"Remove element element : ";
    for(int p : myList)
    {

        cout<<p<<" "<<endl;
    }

    // sorting ascending order

        list<int> myLi = {10,20,301,10,40,10,50,5,1,22,11};
        myLi.sort();
        cout<<"Sorting : ";
        for(int p : myLi)
    {

        cout<<p<<" "<<endl;
    }

    // sorting descending

    list<int> myL = {10,20,301,10,40,10,50,5,1,22,11};

    myL.sort(greater<int>());

    cout<<"Descending order : ";

    for(int p : myL)
    {

        cout<<p<<" "<<endl;
    }

    // unique element

    list<int> myL1 = {10,20,301,10,40,10,50,5,1,22,11};

    myL1.sort();

    myL1.size();

    myL1.unique();
    cout<<"Descending order and unique element : ";

    for(int p : myL1)
    {

        cout<<p<<" "<<endl;
    }

    // for reverse

    list<int> myL11 = {10,20,301,10,40,10,50,5,1,22,11};

    myL11.reverse();
    myL11.min();

    cout<<"Reverse order  : ";

    for(int p : myL11)
    {

        cout<<p<<" "<<endl;
    }


}
