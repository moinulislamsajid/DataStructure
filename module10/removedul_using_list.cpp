#include<bits/stdc++.h>
using namespace std;

int main()

{

     list<int> linkList;

     int value;

     while(1)

     {

         cin>>value;

         if(value == -1)
         {
             break;
         }
         linkList.push_back(value);


     }

     linkList.sort();

     linkList.unique();

     for(int val : linkList)
     {

         cout<<val<<" ";
     }
}
