#include <iostream>
#include <stack>
using namespace std;

bool isValid(string& s)
{
    stack<char> stk;
    for (char ch : s)
    {
        if (ch == '1' && !stk.empty() && stk.top() == '0')
        {
            stk.pop();
        }
        else if (ch == '0' && !stk.empty() && stk.top() == '1')
        {
            stk.pop();
        }
        else
        {
            stk.push(ch);
        }
    }
    return stk.empty();
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        if (isValid(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
