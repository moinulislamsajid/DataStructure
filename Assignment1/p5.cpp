#include <iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;


    if (n == 1)
    {
        cout << 'X' << endl;
    }

    else
    {
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << ' ';
            }
            cout << "\\";

            for (int j = 0; j < n - 2 - 2 * i; j++)
            {
                cout <<" ";
            }

            cout << "/" << endl;
        }

        for (int j = 0; j < n / 2; j++)
        {
            cout <<" ";
        }
        cout << 'X' << endl;

        for (int i = n / 2 - 1; i >= 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                cout <<" ";
            }
            cout << '/';

            for (int j = 0; j < n - 2 - 2 * i; j++)
            {
                cout <<" ";
            }

            cout << "\\" << endl;
        }

        return 0;
    }
}
