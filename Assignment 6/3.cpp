// bubble sort

#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
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

    int arr[] = {9,8,-8,-2,0,100};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"Unsorted Array: ";
    printArray(arr,n);

    bubble_sort(arr, n);

    cout<<"Sorted Array: ";
    printArray(arr,n);

    return 0;
}