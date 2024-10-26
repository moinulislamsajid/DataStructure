#include<bits/stdc++.h>

using namespace std;

    void print_L(const list<int> &lst) {

    cout << "L -> ";
    for (const int& val : lst) {
        cout << val << " ";
    }
    cout << endl;
}

   void print_R(const list<int> &lst) {

    cout << "R -> ";
    for (auto it = lst.rbegin(); it != lst.rend(); it++) {
       cout << *it << " ";
  }
    cout << endl;
}

int main() {

    list<int> linkedlist;

    int q;

    cin >> q;

    for (int i = 0; i < q; ++i) {
        int pos, val;
        cin >> pos >> val;

        if (pos < 0 || pos > linkedlist.size()) {

            cout << "Invalid" << endl;

        } else {

            auto it = linkedlist.begin();

            //advance(it, pos);
            linkedlist.insert(it, val);

            print_L(linkedlist);
            print_R(linkedlist);
        }
    }

    return 0;
}


