#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void printLinkedList(Node* &head){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
}

void insertAtEnd(Node* &tail, int data){
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

void deleteFunc(Node* &head, int key){

    if(head==NULL){
        return;
    }

    if(head->data == key){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    deleteFunc(head->next, key);
}

void deleteKey(Node* &head, int key){
   
    int count = 0;

    Node* temp = head;
    while(temp != NULL){
        if(temp->data == key){
            count++;
        }
        temp = temp->next;
    }

    cout<<"Number of occurances of "<<key<<" is: "<<count<<endl;

    for(int i=0; i<count; i++){
        deleteFunc(head, key);
    }
}

int main(){

    Node* newNode = new Node(1);
    Node* head = newNode;
    Node* tail = newNode;

    insertAtEnd(tail, 2);
    insertAtEnd(tail, 1);
    insertAtEnd(tail, 2);
    insertAtEnd(tail, 1);
    insertAtEnd(tail, 3);
    insertAtEnd(tail, 1);

    printLinkedList(head);
  
    deleteKey(head, 1);

    printLinkedList(head);
}