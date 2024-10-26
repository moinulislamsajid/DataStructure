#include<bits/stdc++.h>
using namespace std;

int main()

{

    // when we use nested if then we found n*n time complexity

    int n;
    cin>>n;

    for(int i = 0; i<5; i++) // this is O_N*N time complexity
    {
        for(int j = 0 ; j<i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
