#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
        {
        int sz;
        cin >> sz;

        list<int> l;
        for (int j = 0; j < sz; j++) {
            int val;
            cin >> val;
            l.push_back(val);
        }

        l.sort();
        l.unique();

        for (int j : l) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
