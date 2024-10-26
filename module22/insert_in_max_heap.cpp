#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int>v = {50,40,45,30,35,42,32,25,20,10};
    int x;
    cin>>x;
    v.push_back(x);
    int curr_indx = v.size() - 1;
    //cout<<curr_indx<<" ";
    //cout<<parentIndx<<" ";

    while(curr_indx != 0)
    {
        int parentIndx = (curr_indx - 1) /2;

        if(v[parentIndx] < v[curr_indx])
        {
            swap(v[parentIndx],v[curr_indx]);
        }
        else
        {
            break;
        }
        curr_indx = parentIndx ;

    }

    // print the heap value

    for(int f : v)
    {
        cout<<f<<" ";
    }


}
