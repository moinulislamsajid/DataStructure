#include<bits/stdc++.h>
using namespace std;

int main()

{

    vector<int> v={1,2,3,4,5};

    // to get the size

    cout<<v[v.size() - 1];
    cout<<endl;

    // another why of get the size

    cout<<v.back();

    // to get the first or second element

    cout<<endl;
    cout<<v[0];

    // another why to get the first element

    cout<<endl;
    cout<<v.front();

    cout<<endl;

    // using iterator

    vector<int> vec = {4,6,7,8,4,3};

    //vec.push
    //https://docs.google.com/document/d/1-AlWED5nChiMx4iqH_E-dCTgZn2EmzpB1THvfw-L7pM/edit

    for(auto it = vec.begin(); it<vec.end(); it++)
    {


        cout<<*it<<" ";

    }




}

