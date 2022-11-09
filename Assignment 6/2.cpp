// insertion sort

#include <iostream>
using namespace std;

void insertion_sort(int *arr, int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{

    int arr[] = {0,5,1,-9,10,55};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"Unsorted Array: ";
    printArray(arr,n);

    insertion_sort(arr, n);

    cout<<"Sorted Array: ";
    printArray(arr,n);

    return 0;
}