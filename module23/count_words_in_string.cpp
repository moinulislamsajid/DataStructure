#include<bits/stdc++.h>
using namespace std;

int main()
{

    string name;
    getline(cin,name);

    string word;
    stringstream ss(name);
    map<string,int>mp;
    while(ss>>word)
    {
        mp[word]++;
    }

    for(auto it = mp.begin(); it!=mp.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

}
