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

        void enqueue(){
            if(isFull()){
                cout<<"Queue is full"<<endl;
            }
            else{
                int value;
                cout<<"Enter value to enqueue: ";
                cin>>value;
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
                    front = rear - 1;
                }
                else{
                    front = front+1;
                }
            }
        }

        void showFront(){
            if(isEmpty()){
                cout<<"Queue is empty"<<endl;
            }
            else{
                cout<<"Front: "<<arr[front]<<endl;
            }
        }
        
        void displayQueue(){
            if(isEmpty()){
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


int main(){

    Queue q(10);
    bool flag = true;

    while(true){
    
        cout<<"0.Exit\n1.Enqueue\n2.Dequeue\n3.Show Front\n4.Display Queue\n";
        cout<<"Select Operation: ";

        int choice;
        cin>>choice;

        if(choice == 1){
            q.enqueue();
        }
        else if(choice == 2){
            q.dequeue();
        }
        else if(choice == 3){
            q.showFront();
        }
        else if(choice == 4){
            q.displayQueue();
        }
        else if(choice == 0){
            break;
        }
    }

}