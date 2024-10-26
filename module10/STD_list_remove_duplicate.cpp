#include <bits/stdc++.h>

using namespace std;

int main() {

    list<int> linkedList;
    set<int> uniqueValues;
    int value;

    // Read input values until -1 is encountered
    while (cin >> value && value != -1) {
        linkedList.push_back(value);
    }

    // Insert values into a set to remove duplicates
    for (int val : linkedList) {
        uniqueValues.insert(val);
    }

    // Print the unique values in ascending order

    sort(uniqueValues.begin(),uniqueValues.end());
    for (int val : uniqueValues) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

