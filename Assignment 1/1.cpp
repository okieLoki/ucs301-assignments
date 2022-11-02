#include <iostream>
using namespace std;
int a[100];
void create()
{
    int size;
    cout << "Enter size " << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
}
void display()
{
    int size;
    cout << "Enter size " << endl;
    cin >> size;
    cout << "Enter elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Your array is" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}
void insert()
{
    int size;
    int elem, pos;
    int i;
    cout << "Enter size " << endl;
    cin >> size;
    cout << "Enter elements" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "\nEnter Element to Insert: " << endl;
    cin >> elem;
    cout << "Which position ? " << endl;
    cin >> pos;
    for (i = size; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[i] = elem;
    size++;
    cout << "The New Array is:" << endl;
    for (i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}
void Delete()
{
    int size;
    int ind;
    cout << "Enter size " << endl;
    cin >> size;
    cout << "Enter elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the index to delete" << endl;
    cin >> ind;
    if (ind >= size)
    {
        return;
    }
    for (int i = ind; i < size - 1; i++)
    {
        a[i] = a[i + 1];
    }
    size--;
    cout << "new array is" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}
void search()
{
    int size;
    int element;
    int index;
    cout << "Enter size " << endl;
    cin >> size;
    cout << "Enter elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the element to search" << endl;
    cin >> element;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == element)
        {
            index = i;
            break;
        }
    }
    cout << "Found at Index No." << index << endl;
}
void exit()
{
    cout << "end of program" << endl;
}
int main()
{
    int op;
    cout << "\n --MENU--";
    cout << "\n 1. CREATE \n 2. DISPLAY \n 3. INSERT";
    cout<<"\n 4. DELETE \n 5. SEARCH \n 6. EXIT \n";
    cout << "Enter your choice" << endl;
    while (1)
    {
        cin >> op;
        switch (op)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert();
            break;
        case 4:
            Delete();
            break;
        case 5:
            search();
            break;
        case 6:
            exit();
            break;
        default:
            cout << "enter valid input" << endl;
        }
    }
    return 0;
}#include<iostream>
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
