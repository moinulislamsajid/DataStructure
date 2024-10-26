#include<bits/stdc++.h>
using namespace std;

int main()
{
    // to get the size

    vector<int>v = {1,2,3,4};

    cout<<"Size of the vector is : "<<v.size()<<endl;

    // if we calculate the maximum size

    cout<<"Maximum size : "<<v.max_size()<<endl;

    // to find out the capacity

    cout<<"Capacity is : "<<v.capacity()<<endl;

    // play with push back

    vector<int> vv;

    cout<<"Capacity : "<<vv.capacity()<<endl;

    // to get the push back

    vv.push_back(10);

    cout<<"Capacity : "<<vv.capacity()<<endl;

    vv.push_back(20);

    cout<<"Capacity : "<<vv.capacity()<<endl;

    vv.push_back(30);

    cout<<"Capacity : "<<vv.capacity()<<endl;

    vv.push_back(40);

    cout<<"Capacity : "<<vv.capacity()<<endl;

    vv.push_back(50);

    cout<<"Capacity : "<<vv.capacity()<<endl;


    // work with clear

    vector<int>vm;

    vm.push_back(10);
    vm.push_back(20);
    vm.push_back(30);
    vm.push_back(40);
    vm.push_back(50);

    // if we have clear to the vector

    vm.clear();

        // also find the size

    cout<<"Size of this : "<<vm.size()<<endl;

    for(int i = 0; i<vm.size(); i++)
    {
        cout<<vm[i]<<" ";
    }

    // to get the resize

    vector<int>vb;
    vb.push_back(2);
    vb.push_back(4);
    vb.push_back(8);
    vb.push_back(0);
    vb.push_back(5);

    cout<<"Size of (application of Resize) : "<<vb.size()<<endl;
    vb.resize(2);
    cout<<"Size of (application of Resize) : "<<vb.size()<<endl;
    vb.resize(4);
    cout<<"Size of (application of Resize) : "<<vb.size()<<endl;

}
