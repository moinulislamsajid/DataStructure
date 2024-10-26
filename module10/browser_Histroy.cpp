#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    string value;
    Node* next;
    Node* prev;

    Node(string value) {
        this->value = value;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

void insert_tail(Node*& head, Node*& tail, string val) {
    Node* newNode = new Node(val);
    if (tail == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void handle_queries(Node* head, int Q) {
    Node* current = head;
    string command, address;
    for (int i = 0; i < Q; ++i) {
        cin >> command;
        if (command == "visit") {
            cin >> address;
            Node* temp = head;
            bool found = false;
            while (temp != nullptr) {
                if (temp->value == address) {
                    current = temp;
                    cout << address << endl;
                    found = true;
                    break;
                }
                temp = temp->next;
            }
            if (!found) {
                cout << "Not Available" << endl;
            }
        } else if (command == "next") {
            if (current->next != nullptr) {
                current = current->next;
                cout << current->value << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (command == "prev") {
            if (current->prev != nullptr) {
                current = current->prev;
                cout << current->value << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
    }
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;
    string val;

    // Read the linked list values until "end" is encountered
    while (true) {
        cin >> val;
        if (val == "end") {
            break;
        } else {
            insert_tail(head, tail, val);
        }
    }

    // Read the number of queries
    int Q;
    cin >> Q;

    // Handle the queries
    handle_queries(head, Q);

    return 0;
}
