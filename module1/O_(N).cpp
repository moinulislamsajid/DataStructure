#include<bits/stdc++.h>

using namespace std;

int main()

{


    int n;

    cout<<"Enter your arrays size : ";
    cin>>n;

    // create an arrays

    int number[n];

    for(int i = 0; i<n; i++) // here time complexity O_(N)
    {

        cin>>number[i];
    }

    int m;
    cout<<"Enter your another arrays size : ";
    cin>>m;

    for(int i = 0; i<m; i++) // time complexity here is O_N ->> where add or sub
    {

        cin>>number[i];
    }


}
