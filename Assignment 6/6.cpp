//counting sort

#include <iostream>
using namespace std;

void countSort(int arr[], int n) 
{ 
    int output[n]; 
    int i, count[10] = {0}; 
  
    for (i = 0; i < n; i++) 
        count[arr[i]]++; 
  
    for (i = 1; i < 10; i++) 
        count[i] += count[i - 1]; 
  
    for (i = n - 1; i >= 0; i--) 
    { 
        output[count[arr[i]] - 1] = arr[i]; 
        count[arr[i]]--; 
    } 
  
    for (i = 0; i < n; i++) 
        arr[i] = output[i]; 
} 

void printArray(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{

    int arr[] = {5,3,7,8,1,0,1,3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"Unsorted Array: ";
    printArray(arr,n);

    countSort(arr, n);

    cout<<"Sorted Array: ";
    printArray(arr,n);

    return 0;
}