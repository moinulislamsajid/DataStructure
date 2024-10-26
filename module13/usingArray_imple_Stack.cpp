#include<bits/stdc++.h>

using namespace std;

class MyStack {

public:

    vector<int> v;

    void push(int value) {

        v.push_back(value);
    }

    void pop() {

        if (!v.empty()) {

            v.pop_back();
        }
    }

    int top() {

        if (!v.empty()) {

            return v.back();
        }
        return -1;
    }

    int  size_S() {

        return v.size();
    }

    bool empty_S() {

        return v.empty();
    }
};

class MyQueue {

public:

    vector<int> v;

    void push(int value) {

        v.push_back(value);
    }

    void pop() {

        if (!v.empty()) {

            v.erase(v.begin());
        }
    }

    int front_Q() {

        if (!v.empty()) {
            return v.front();
        }
        return -1;
    }

    int size_Q() {
        return v.size();
    }

    bool empty_Q() {
        return v.empty();
    }
};

int main() {

    int n, m;
    cin >> n >> m;

    MyStack stack;
    MyQueue queue;

    int value;
    for (int i = 0; i < n; i++) {
        cin >> value;
        stack.push(value);
    }

    for (int i = 0; i < m; i++) {
        cin >> value;
        queue.push(value);
    }

    if (stack.size_S() != queue.size_Q()) {

        cout << "NO" << endl;
        return 0;
    }

    int flag = 0;

    while (!stack.empty_S() && !queue.empty_Q()) {

        if (stack.top() != queue.front_Q()) {

            flag = 1;
            break;
        }
        stack.pop();
        queue.pop();
    }

    if (flag == 1) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

    return 0;
}
