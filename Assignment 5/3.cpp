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

        bool isEmpty(){
            if(front == -1 && rear == -1){
                return true;
            }
            return false;
        }

        bool isFull(){
            if(rear == size){
                return true;
            }
            return false;
        }

        void enqueue(int value){
            if(isFull()){
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

        void dequeue(){
            if(isEmpty()){
                cout<<"Queue is empty"<<endl;
            }
            else{
                if(front == rear){
                    front = rear = - 1;
                }
                else{
                    front = front+1;
                }
            }
        }

        int returnFront(){
            return arr[front];
        }
        
        void displayQueue(){
            if(isEmpty()){
                cout<<"Queue is empty"<<endl;
            }
            else{
                cout<<"Queue: ";
                for(int i=front; i<=rear; i++){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
        }
};

void interleavequeue(Queue &q){
    Queue tmp(100);

    int halfSize = 5;

    for(int i =0 ; i<halfSize; i++){
        tmp.enqueue(q.returnFront());
        q.dequeue();
    }

    while(!tmp.isEmpty()){
        q.enqueue(tmp.returnFront());
        q.enqueue(q.returnFront());
        q.dequeue();
        tmp.dequeue();
    }
}

int main(){

    Queue q(100);
    q.enqueue(11);
    q.enqueue(12);
    q.enqueue(13);
    q.enqueue(14);
    q.enqueue(15);
    q.enqueue(16);
    q.enqueue(17);
    q.enqueue(18);
    q.enqueue(19);
    q.enqueue(20);

    q.displayQueue();

    interleavequeue(q);

    q.displayQueue();

}