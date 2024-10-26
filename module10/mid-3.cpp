#include <bits/stdc++.h>
using namespace std;

class Node {

    public:

    int value;
    Node* next;
    Node* prev;

    Node(int value) {


        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_first(Node* &head, Node* &tail, int val) {


    Node* newNode = new Node(val);

    if (head == NULL) {

        head = newNode;
        tail = newNode;

    } else {

        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insert_any(Node* &head, Node* &tail, int pos, int val) {

    if (pos < 0) {

        cout << "Invalid" << endl;
        return;
    }

    Node* newNode = new Node(val);

    if (pos == 0) {
        insert_first(head, tail, val);
        return;
    }

    Node* temp = head;
    int currentPos = 0;

    while (temp != NULL && currentPos < pos - 1) {

        temp = temp->next;
        currentPos++;
    }

    if (temp == NULL) {

        cout << "Invalid" << endl;
        delete newNode;
        return;
    }

    newNode->next = temp->next;

    if (temp->next != NULL) {

        temp->next->prev = newNode;

    } else {

        tail = newNode;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

void print_L(Node* head) {

    cout << "L -> ";

    Node* temp = head;

    while (temp != NULL) {

        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_R(Node* tail) {

    cout << "R -> ";

    Node* temp = tail;

    while (temp != NULL) {

        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {

        int pos, val;
        cin >> pos >> val;

        if (head == NULL && pos != 0) {

            cout << "Invalid" << endl;

        } else if (pos == 0) {

            insert_first(head, tail, val);
            print_L(head);
            print_R(tail);

        } else {

            Node* temp = head;
            int len = 0;

            while (temp != NULL) {

                len++;
                temp = temp->next;
            }

            if (pos > length) {

                cout << "Invalid" << endl;

            } else {

                insert_any(head, tail, pos, val);
                print_L(head);
                print_R(tail);
            }
        }
    }

}
