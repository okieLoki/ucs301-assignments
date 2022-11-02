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

void insertAtStart(Node* &head, int data){
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

void insertAtEnd(Node* &tail, int data){
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

void insertAtIndex(Node* &head, Node* &tail, int index, int data){

    if(index==0){
        insertAtStart(head, data);
        return;
    }
    Node* temp = head;
    int cnt = 0;

    while(cnt < index-1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertAtEnd(tail, data);
        return;
    }

    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteNode(Node* &head, int index){
    
    if(index==0){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int count = 0;

        while(count < index){
            prev = curr;
            curr = curr->next;
            count++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void search(Node* head, int data){
    Node* temp = head;
    int count = 0;
    while(true){
        if(temp->data == data){
            cout<<"Element is present at index: "<<count<<endl;
            return;
        }
        else{
            temp = temp->next;
            count++;
        }
    }
}

void printLinkedList(Node* &head){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
}

int main(){

    Node* newNode = new Node(10);
    Node* head = newNode;
    Node* tail = newNode;

    printLinkedList(head);
    insertAtStart(head, 8);
    printLinkedList(head);
    insertAtEnd(tail, 3);
    printLinkedList(head);
    insertAtIndex(head, tail, 1, 5);
    printLinkedList(head);
    deleteNode(head, 1);
    printLinkedList(head);
    search(head,10);
}