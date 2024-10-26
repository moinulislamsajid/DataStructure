#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string sen;
        getline(cin,sen);

        map<string,int> mp;
        stringstream ss(sen);
        string word;

        string max_word;
        int max_count = 0;

        while (ss >> word) {

            mp[word]++;

            if (mp[word] > max_count) {
                max_word = word;
                max_count = mp[word];
            }
        }

        cout << max_word << " " << max_count << endl;
    }

    return 0;
}
