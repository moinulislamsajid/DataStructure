#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here

    int n;
    cin>>n;

    int number[n];
    for(int i = 0; i<n; i++)
    {

        cin>>number[i];
    }

    int dup = 0;


    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {

            if(number[i] == number[j])
            {
                dup = 1;
            }


        }
    }

    if(dup == 1)
    {

        cout<<"YES"<<endl;
    }else
    {


        cout<<"NO"<<endl;
    }

    return 0;
}

