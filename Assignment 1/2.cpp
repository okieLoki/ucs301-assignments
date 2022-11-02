#include<iostream>
using namespace std;

void print(int *arr, int size){
    cout<<"Array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i];
    }
    cout<<endl;
}

void deleteElement(int *arr, int &size, int index){
    if(index<size){
        size = size - 1;
        for(int i= index; i<size; i++){
            arr[i] = arr[i+1];
        }
    }
}

void duplicateDelete(int *arr, int &size){
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i] == arr[j]){
                deleteElement(arr, size, j);
            }
        }
    }
}

int main(){

    int size = 8;
    int *arr = new int[size];
    
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    print(arr, size);
    duplicateDelete(arr,size);
    print(arr, size);

}