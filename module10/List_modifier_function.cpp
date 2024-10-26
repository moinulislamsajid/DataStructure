#include<bits/stdc++.h>
using namespace std;

int main()

{

    list<int> mylist = {10,20,30};
    list<int> newList;

    newList = mylist;

    // assign another why
    newList.assign(mylist.begin(), mylist.end());

    for(int n : newList)
    {

        cout<<n<<" "<<endl;
    }

    cout<<"Set end"<<endl;
    // creating another list to per from linked list

    list<int> lin_list = {11,22,33};


        // for insert

    lin_list.push_back(100);
    lin_list.push_front(99);


    // for delete

    lin_list.pop_back();


    // insert value any position

    lin_list.insert(next(lin_list.begin() , 2), 1000);

    for(int p : lin_list)
    {

        cout<<p<<" "<<endl;
    }

    // delete any position

    lin_list.erase(next(lin_list.begin(),1));

    cout<<"delete : ";
     for(int p : lin_list)
    {

        cout<<p<<" "<<endl;
    }


    list<int> hello = {10,20,30,40,50};

    lin_list.insert(next(lin_list.begin(),2),hello.begin(), hello.end());

    cout<<"Insert element : ";
     for(int p : lin_list)
    {

        cout<<p<<" "<<endl;
    }

    // delete range

    lin_list.erase(next(lin_list.begin(),2),next(lin_list.begin(),6));

    cout<<"After deleting : ";
    for(int p : lin_list)
    {

        cout<<p<<" "<<endl;
    }

    // replace

    replace(lin_list.begin(),lin_list.end(),99,100);
    cout<<"After replace : ";
    for(int p : lin_list)
    {

        cout<<p<<" "<<endl;
    }

    auto bv = find(lin_list.begin(), lin_list.end(), 1000);

    if(bv == lin_list.end())
       {

           cout<<"Not found";
       }
    else
        {

            cout<<"Found";

        }


}
