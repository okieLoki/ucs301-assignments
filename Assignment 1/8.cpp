#include<iostream>
using namespace std;

void rotate(int *arr, int size, int n){
    for(int i=0; i<n; i++){
        int temp = arr[0];
        int j;
        for(j=0; j<size-1; j++){
            arr[j] = arr[j+1];
        }
        arr[j] = temp;
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    rotate(arr, 5, 2);

    for(auto x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
}