//circular linked list
#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        int next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void insert(Node* &tail, int data){
    if(tail==NULL) return;

    Node* newNode = new Node(data);
    
}

int main(){

}