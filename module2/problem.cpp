#include<bits/stdc++.h>
using namespace std;

int main()

{

    vector<int> v={1,2,3,4};
    v.resize(2);
    v.resize(4);

    for(int i : v)
    {

        cout<<i<<endl;
    }
}
