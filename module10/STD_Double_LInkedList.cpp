#include <iostream>
#include <list>
using namespace std;

void printL(const list<int>& lin) {

    cout << "L -> ";

    for(auto it = lin.begin(); it != lin.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void printR(const list<int>& lin) {

    cout << "R -> ";
    for(auto it = lin.rbegin(); it != lin.rend(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    int q;
    cin >> q;

    list<int> lin;

    for(int i = 0; i < q; i++) {
        int x, v;
        cin >> x >> v;

        if(x == 0) {

            lin.push_front(v);

        } else if(x == 1) {

            lin.push_back(v);


        } else if(x == 2) {

            if(v >= 0 && v < static_cast<int>(lin.size()))
                {
                auto it = lin.begin();

                for(int j = 0; j < v; j++) {
                    it++;
                }
                lin.erase(it);
            }
        }

        printL(lin);

        printR(lin);
    }

    return 0;
}
