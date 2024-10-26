#include<bits/stdc++.h>
using namespace std;

class my_queue
{
public :

    list<int> mylist;

    void push(int val)
    {

        mylist.push_back(val);
    }

    void pop()
    {

        mylist.pop_front();
    }
    int front1()
    {
        return mylist.front();
    }
    int size1()
    {
       return mylist.size();
    }

    bool emp()
    {
        if(mylist.empty())
        {
            return true;
        }else{

            return false;
        }
    }


};

int main()
{
    my_queue obj;

    int n;
    for(int  i =0; i<5; i++)
    {
        cin>>n;
        obj.push(n);

    }

    while(!obj.emp())
    {


            cout<<obj.front1()<<endl;
            obj.pop();
    }


}
