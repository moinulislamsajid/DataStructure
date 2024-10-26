#include<bits/stdc++.h>
using namespace std;

int main()
{

    // create a map -> map is data structure simply retain key and value whatever key is any data type also class or objects.

    map<string,int>mp;

    // insert value

    mp.insert({"Ayman Sajid",19});
    mp.insert({"Samiur Rahman Sakib",1});
    mp.insert({"Mojibor Rahman",14});


    // print the value

    for(auto it = mp.begin(); it!=mp.end(); it++)
    {
        cout<<it->first<<" "<<endl<<it->second<<endl;
    }

    // another process for access the data

    cout<<"================ show index =================\n";
    cout<<mp["mojibor rahman"]<<endl;
    cout<<mp["Mojibor Rahman"]<<endl;

    // if value is retain

    if(mp.count("Mojibor Rahman"))
    {
        cout<<"Available"<<endl;
    }else
    {
        cout<<"Unavailable"<<endl;
    }

    // another way of insert

    mp["hello"] = 21;
    mp["Gallo"] = 23;

    cout<<mp["hello"]<<endl;
}
