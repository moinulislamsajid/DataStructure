#include <iostream>
using namespace std;

class Node {

public:

    int value;
    Node *next;

    Node(int value) {
        this->value = value;
        this->next = NULL;
    }
};

void insertfirst(Node *&head, Node *&tail, int val) {

    Node *newNode = new Node(val);

    if (head == NULL) {

        head = newNode;
        tail = newNode;

    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void insertlast(Node * &head, Node * &tail, int val) {


    Node *newNode = new Node(val);

    if (head == NULL) {


        head = newNode;
        tail = newNode;

    }

    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void deleteAny(Node * &head, Node * &tail, int x) {


    if (head == NULL) {
        return;
    }

    if (x == 0) {
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL) {
            tail = NULL;
        }
        delete deleteNode;
        return;
    }

    Node *temp = head;
    for (int i = 0;  i < x - 1 && temp != NULL ; i++) {

        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {

        return;

    Node *deleteNode = temp->next;
    temp->next = deleteNode->next;

    if (temp->next == NULL) {
        tail = temp;
    }
    delete deleteNode;
}
}

 void print(Node *head) {

    Node *temp = head;

    while (temp != NULL) {

        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

 int main() {

    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {

        int pos, va;
        cin >> pos >> va;

        if (pos == 0) {

            insertfirst(head, tail, va);

        } else if (pos == 1) {

            insertlast(head, tail, va);

        } else if (pos == 2) {

            deleteAny(head, tail, va);
        }

        print(head);
    }


}
