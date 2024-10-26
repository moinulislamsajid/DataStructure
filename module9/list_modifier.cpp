#include<bits/stdc++.h>
using namespace std;

int main()
{

    // assian a list into another list

    list<int> h = {1,2,3,4};
    list<int> j;

    j = h;

    for(int i : j)
    {

        cout<<i<<" ";
    }

    cout<<endl;


    list<int>hlist={22,3,3,45,5};
    list<int>knew;

    knew.assign(hlist.begin(),hlist.end());

    for(int k : knew)
    {
        cout<<k<<" ";
    }
    cout<<endl;

    // using push back

    list<int>pList;

    pList.push_back(10);
    pList.push_back(20);
    pList.push_back(30);
    pList.push_back(10);
    pList.push_front(8);
    pList.pop_back();
    pList.pop_front();
    for(int n : pList)
    {
        cout<<n<<" ";
    }

    cout<<endl;

    // insert a value

    list<int> inList = {1,7,3,5,8};

    inList.insert(next(inList.begin(),2),39);

    for(int n : inList)
    {
        cout<<n<<" ";
    }

    cout<<endl;

    // erase value

    inList.erase(next(inList.begin(),1));
    for(int n : inList)
    {
        cout<<n<<" ";
    }
    cout<<endl;

    // insert new list

    list<int>innList ={1,2,3};
    list<int>party = {3,4,5,3,3,3};

    innList.insert(next(innList.begin(),1),{2,4,5,7,7});
    innList.insert(next(innList.begin()),party.begin(),party.end());
    innList.erase(next(innList.begin(),2),next(innList.begin(),9));
    for(int j : innList)
    {
        cout<<j<<" ";
    }
    cout<<endl;

    // using replace function

    list<int>hello={1,2,1,1,1,3};
    replace(hello.begin(),hello.end(),1,0);

    for(int i : hello)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    // find function

    list<int>hel = {1,2,1,2,3,4};

    auto it = find(hel.begin(),hel.end(),9);
    //cout<<*it<<endl;

    if(it == hel.end())
    {

      cout<<"Not Found";
    }
    else
    {
        cout<<"Found";
    }

}
