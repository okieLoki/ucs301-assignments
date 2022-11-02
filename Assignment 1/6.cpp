#include<bits/stdc++.h>
using namespace std;

void insertionSort(int *arr, int size){
    for(int i=0; i<size;i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]>arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main(){

    int arr[]={2,4,46,1,-13,0};

    insertionSort(arr,6);

    for(int x : arr){
        cout<<x<<" ";
    }

}