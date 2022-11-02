#include <iostream> 
using namespace std; 

int missingNo(int *arr, int size){
    
    int sum = (size+1)*(size+2)/2;
    for(int i=0; i<size; i++){
        sum = sum - arr[i];
    }

    return sum;
}

int main(){

    int arr[] = {1,2,3,4,5,7,8,9};
    cout<<"Missing Number is: "<<missingNo(arr,8)<<endl;
}
