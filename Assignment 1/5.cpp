#include<iostream>
using namespace std;

int binary_search(int *arr, int n, int key){

    int start = 0;
    int end = n-1;

    while(start<=end){
        int mid = (start+end)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        } 
    }
    return -1;
}

int main(){

    int arr[]={10,20,30,40,50,60,70,80};
    int n = sizeof(arr)/sizeof(arr[0]);

    int key;
    cin>>key;

    int index = binary_search(arr,n,key);

    if(index!=-1) cout<<"Key is at index "<<index<<endl;
    else cout<<"Key not found"<<endl;

    return 0;

}