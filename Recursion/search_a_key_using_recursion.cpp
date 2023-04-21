#include<iostream>
using namespace std;

bool search(int *arr, int size, int key)
{
    if(size == 0)   // base case;
        return false;

    if(key == arr[0])   // if key found
        return true;

    // make recursive call;
    else
        return search(arr+1, size-1, key);   
}

int main()
{    
    int arr[100];
    int size,key;
    cout << "Enter size of array : ";
    cin >> size;

    cout << "Enter element is array : ";
    for(int i = 0 ; i < size; i++)
        cin >> arr[i];

    cout << "Enter your key : ";
    cin >> key;

    if(search(arr,size,key))
        cout << "Present";
    else
        cout << "Not present";
    return 0;
}