#include<bits/stdc++.h>
using namespace std;

class Node{

public :

    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;

    }


 };

 void insert_Last(Node* &head,Node* &tail,int val)
 {

     Node* newNode = new Node(val);

     if(head == NULL)
     {
         head = newNode;
         tail = newNode;
         return;
     }else
     {
         tail->next = newNode;
         tail = newNode;
     }



 }

 void insert_any(Node *head,int pos,int val)
 {

     Node *newNode = newNode(val);
     Node *temp = head;

     for(int i = 1; i<=pos - 1; i++)
     {

         temp = temp->next;
     }

     newNode->next = temp->next;
     temp->next = newNode;
 }

 void printValue(Node* head)
 {

    Node* temp = head;

     while(temp != NULL)
     {

        cout<<temp->value<<"->";
        temp = temp->next;

     }

     cout<<endl;

 }

 void delete_Last(Node* head)
 {

     if(head == NULL)
     {
         cout<<"The set is empty"<<endl;
         return;
     }

     if(head->next == NULL) // if linked list have only one value
     {
         head = NULL;
         return;
     }

     Node *seclastNode = head;
     Node *lastNode = seclastNode->next;

     while(lastNode->next != NULL)
     {
         seclastNode = seclastNode->next;
         lastNode = lastNode->next;

     }

     seclastNode->next = NULL:


 }

 void delete_anyOne(Node *head,int pos)
 {

     Node *temp = head;

     for(int i=1; i<=pos - 1; i++)
     {
         temp = temp->next;
     }

     Node* delN = temp->next;
     temp->next = temp->next->next;
     delete delN;


 }

 int main()
 {

     Node* head = NULL;
     Node* tail = NULL;

     int val;
     while(true)
     {

         cin>>val;

         if(val == -1)
         {

             break;
         }
         else
         {
             insert_Last(head,tail,val);
         }
     }

     printValue(head);

     delete_last(head);

     printValue(head);
 }
