#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here

    int t;
    cin>>t;

    for(int i = 0; i<t; i++)
    {

        int n;
        cin>>n;

        int number[n];
        int copy[n];

        for(int i = 0; i<n; i++)
        {

            cin>>number[i];
            copy[i] = number[i];
        }

        sort(number,number+n);



        for(int i = 0; i<n; i++)
        {

            if(number[i] == copy[i])
            {
                cout<<"YES"<<endl;
                break;
            }
            else
            {
                cout<<"NO"<<endl;
                break;
            }
        }
    }

    return 0;
}

