#include <iostream> 
using namespace std; 
  
int main() 
{ 
    int r1,c1,r2,c2; 

    cout<<"Enter rows and columns for 1st matrix: "; 
    cin>>r1>>c1; 
    cout<<"Enter rows and columns for 2nd matrix: "; 
    cin>>r2>>c2; 
  
    int first[r1][c1], second[r2][c2], multiply[r1][c2]; 
  
    cout<<"Enter elements of first matrix: "<<endl; 
  
    for(int i = 0; i<r1; ++i) 
        for(int j = 0; j<c1; ++j) 
            cin>>first[i][j]; 
  
    cout<<"Enter elements of second matrix: "<< endl; 
  
    for(int i=0; i<r2; ++i) 
        for(int j=0; j<c2; ++j) 
            cin >> second[i][j]; 
  
    for(int i=0; i<r1; ++i) { 
        for (int j=0; j<c2; ++j) { 
            multiply[i][j] = 0; 
        } 
    } 
  
    for(int i=0; i<r1; ++i) { 
        for(int j=0; j<c2; ++j) { 
            for(int k=0; k<c1; ++k) { 
                multiply[i][j] += first[i][k] * second[k][j]; 
            } 
        } 
    } 
  
    cout<<"Output Matrix: "<<endl; 
  
    for(int i=0; i<r1; ++i) { 
        for(int j=0; j<c2; ++j) { 
            cout << " " << multiply[i][j]; 
            if(j == c2-1) 
                cout<<endl; 
        } 
    } 
  
    return 0; 
}