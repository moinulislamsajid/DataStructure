#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> num(n);

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    int maxEven = -1, maxEven1 = -1;
    int maxOdd = -1, maxOdd1 = -1;

    for (int i = 0; i < n; i++)
    {
        if (num[i] % 2 == 0)
        {
            if (num[i] > maxEven)
            {
                maxEven1 = maxEven;
                maxEven = num[i];
            }
            else if (num[i] > maxEven1)
            {
                maxEven1 = num[i];
            }
        }
        else
        {

            if (num[i] > maxOdd)
            {
                maxOdd1 = maxOdd;
                maxOdd = num[i];
            }
            else if (num[i] > maxOdd1)
            {
                maxOdd1 = num[i];
            }
        }
    }

    int evenSum = -1, oddSum = -1;

    if (maxEven != -1 && maxEven1 != -1)
    {
        evenSum = maxEven + maxEven1;
    }

    if (maxOdd != -1 && maxOdd1 != -1)
    {
        oddSum = maxOdd + maxOdd1;
    }

    int result = max({evenSum, oddSum, maxEven});

    cout << result << endl;

    return 0;
}
