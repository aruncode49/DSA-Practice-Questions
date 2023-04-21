#include<iostream>
using namespace std;

bool binary_search(int *arr, int s, int e, int key)
{
    if(s > e)   // base case
        return false;

    int mid = s+(e-s)/2;    // find mid

    if(key == arr[mid]) // base case
        return true;

    if(arr[mid] > key)  // go in left part
        return binary_search(arr, s, mid-1, key);
       
    else if (arr[mid] < key)    // go in right part
        return binary_search(arr, mid+1, e, key);

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

    cout <<"Enter your key: ";
    cin >> key;

    if(binary_search(arr,0,size-1,key))
        cout << "Present";
    else
        cout << "Not present";

    return 0;
}