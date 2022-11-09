// selection sort

#include <iostream>
using namespace std;

int getMaxIndex(int arr[], int end)
{
    int max = 0;
    for (int i = 0; i <= end; i++)
    {
        if (arr[max] < arr[i])
        {
            max = i;
        }
    }
    return max;
}

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int last = n - i - 1;
        int max = getMaxIndex(arr, last);

        int temp = arr[last];
        arr[last] = arr[max];
        arr[max] = temp;
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

    int arr[5] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"Unsorted Array: ";
    printArray(arr,n);

    selection_sort(arr, n);

    cout<<"Sorted Array: ";
    printArray(arr,n);

    return 0;
}