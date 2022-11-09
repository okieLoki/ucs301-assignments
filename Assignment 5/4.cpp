#include<iostream>
using namespace std;

class Queue{
    public:
        char *arr;
        int size,front,rear;

        Queue(int size){
            this->size = size;
            arr = new char[size];
            this->front = -1;
            this->rear = -1;
        }

        bool isEmpty(){
            if(front == -1 && rear == -1){
                return true;
            }
            else{
                return false;
            }
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
                    front = front + 1;
                }
            }
        }

        int showFront(){
            return arr[front];
        }
};

void firstNonRepeating(char str[]){
    Queue q(30);
    int c[26] = { 0 };
    
    for(int i=0; str[i]; i++){
        q.enqueue(str[i]);
        c[str[i] - 'a']++;
        
        while(!q.isEmpty()){
            if(c[q.showFront() - 'a'] > 1){
                q.dequeue();
            }
            else{
                cout<<(char)q.showFront()<<" ";
                break;
            }
        }
        if(q.isEmpty()){
            cout<<-1<<' ';
        }
    }
}

int main(){

    char str[] = "aabbca";
    firstNonRepeating(str);
}