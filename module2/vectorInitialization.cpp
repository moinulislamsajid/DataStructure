#include<bits/stdc++.h>
using namespace std;

int main()

{
    // create a vector

    // default size
    vector<int> v;

    // to get the size

    cout<<"Default size : "<<v.size()<<endl;

    // with size type

    vector<int> n(10);

    cout<<"Size type : "<<n.size()<<endl;

    // size with value

    vector<int> v2(5,10);

    for(int i = 0; i<v2.size(); i++)
    {
        cout<<v2[i]<<" ";
    }


    // copy vector

    vector<int>v3(5,1);

    // create another vector and assign value to

    vector<int>v4(v3);

    for(int i = 0; i<v4.size(); i++)
    {

        cout<<v4[i]<<" ";
    }

    cout<<endl;
    //using arrays

    int ar[5] = {7,6,5,4,3};

    //create another vector

    vector<int>v5(ar,ar+5);

    for(int i = 0; i<v4.size(); i++)
    {

        cout<<v5[i]<<" ";
    }

    // create vector with initialization

    vector<int>v6 ={9,8,9,8};
    cout<<endl;

    cout<<"Size to create : "<<v6.size()<<endl;

    for(int i = 0; i<v6.size(); i++)
    {
        cout<<v6[i]<<" ";
    }

}
