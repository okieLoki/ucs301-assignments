#include<iostream>
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

void insertAtEnd(Node* &tail, int data){
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

void printLinkedList(Node* &head){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
}

void reverse(Node* &head){
    Node* temp = NULL;
    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL){
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    head = prev;
}

int main(){

    Node* newNode = new Node(1);
    Node* head = newNode;
    Node* tail = newNode;

    insertAtEnd(tail, 2);
    insertAtEnd(tail, 3);

    printLinkedList(head);

    reverse(head);

    printLinkedList(head);

}
