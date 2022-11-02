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

void printMiddle(Node *head) 
{ 
    Node *slow_ptr = head; 
    Node *fast_ptr = head; 
  
    if (head!=NULL) 
    { 
        while (fast_ptr!=NULL && fast_ptr->next!=NULL) 
        { 
            fast_ptr = fast_ptr->next->next; 
            slow_ptr = slow_ptr->next; 
        } 
        cout<<"The middle element is "<<slow_ptr->data<<endl; 
    } 
} 

int main(){

    Node* newNode = new Node(1);
    Node* head = newNode;
    Node* tail = newNode;

    insertAtEnd(tail, 2);
    insertAtEnd(tail, 3);


    printMiddle(head);

}
