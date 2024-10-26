#include<bits/stdc++.h>
using namespace std;

int main()
{

    // create a vector

    vector<int> v = {1,2,3};
    vector<int> b = {1,20,30}; // here size are same than the time complexity is O(1)

    b = v;

    // print the vector

    for(int i = 0; i<b.size(); i++)
    {
        cout<<b[i]<<" ";
    }

    // if size are not same than the time complexity is O(N)

    vector<int> n = {13,66,3,45,23};
    vector<int> k = {77,4,78};

    k = n;

    // print the value
    cout<<endl;
    for(int i = 0; i<k.size(); i++)
    {

        cout<<k[i]<<" ";
    }


    // using pop back

    vector<int>vec ={1,2,3,4};
    vec.pop_back();
    cout<<endl;
    for(int i = 0; i<vec.size(); i++)
    {

        cout<<vec[i]<<" ";
    }

    // insert the value from any position

    // create a vector

    vector<int> v1 = {4,5,6,7};

    // insert an element

    // using pointer to insert any element


    v1.insert(v1.begin()+0,1000);


    // print using for each loop

    cout<<endl;
    for(int p : v1)
    {

        cout<<p<<" ";
    }





    /*for(int i = 0; i<v1.size(); i++)
    {

        cout<<v1[i]<<" ";
    }*/


    // when a specific position inset a vector

    vector<int> h = {10,55,22,11,66};
    vector<int> t = {3,1,4};

    t.insert(t.begin()+1,h.begin(),h.end());

    // using for each loop for print the value
    cout<<endl;
    for(int n : t)
    {
        cout<<n<<" ";
    }

    // value erase

    vector<int> num = {1,2,3,4};

    num.erase(num.begin()+1);
    cout<<endl;
    for(int print : num)
    {
        cout<<print<<" ";
    }

    // when delete specific range

    vector<int> number ={76,5,4,33,7,8,3,2,56};

    // when delete the range of the vector element

    number.erase(number.begin()+1,number.begin()+5);

    // using for each loop to print the value
    cout<<endl;
    for(int hh : number)
    {

        cout<<hh<<" ";
    }

    // using replace keyword

    vector<int> rep = {6,5,2,4,2,2,23,3,32,564,3,43,2,2,2,4,5,56,5,4,3,5,55,4};
    replace(rep.begin(),rep.end(),2,0); // here replace is not under the function of vector

    // now print the replace or update file

    cout<<endl;
    cout<<"Here Replace function : ";
    for(int j : rep)
    {
        cout<<j<<" ";
    }

    //find the value from the vector list

    vector<int> bye = {2,4,5,3,2,45,32};

    auto it = find(bye.begin(),bye.end(),3);
    cout<<endl;

    if(it == bye.end())
    {
        cout<<"Not Found"<<endl;
    }else{

        cout<<"Found"<<endl;
    }
}
