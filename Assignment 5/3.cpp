#include<iostream>
using namespace std;

class Queue{
    public:
        int *arr,size,front,rear;

        Queue(int size){
            this->size = size;
            arr = new int[size];
            this->front = -1;
            this->rear = -1;
        }

        void enqueue(int value){
            if(rear == size){
                cout<<"Queue is full"<<endl;
            }
            else{
                if(front==-1){
                    front=0;
                }
                rear=rear+1;
                arr[rear]=value;
            }
        }

        int dequeue(){
            
            int t = arr[front];
            if(front == rear){
                front = rear - 1;
            }
            else{
                front = front+1;
            }
            return t;
        }
        
        void displayQueue(){
            if(front == -1 && rear == -1){
                cout<<"Queue is empty"<<endl;
            }
            else{
                cout<<"Queue: ";
                for(int i=0; i<=rear; i++){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
        }
};

class Stack{
    public:
        int *arr, size, top;

        Stack(int size){
            this->size = size;
            arr = new int[size];
            this->top = -1;
        }

        void push(int value){
            if(top == size){
                return;
            }
            else{
                top = top + 1;
                arr[top] = value;
            }
        }
        int pop(){
            if(top == -1){
                return -1;
            }
            else{
                int t = arr[top];
                top = top - 1;
                return t;
            }
        }
        bool isEmpty(){
            if(top == -1){
                return true;
            }
            return false;
        }
};

int main(){

    Queue q(10);
    Stack s(10);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    q.enqueue(10);



    q.displayQueue();

}