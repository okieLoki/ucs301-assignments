#include<iostream>
using namespace std;

void transpose(int arr[][10], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}

int main(){

    int arr[4][10] = {{1,2,3,4},
                    {5,6,7,8},
                    {6,4,3,0},
                    {9,7,5,4}
                    };
    transpose(arr, 4, 4);
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}