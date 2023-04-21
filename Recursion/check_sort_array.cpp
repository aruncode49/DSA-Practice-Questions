// check a array is sorted using binary search and recursion

#include<iostream>
using namespace std;

bool is_sorted(int arr[], int size)
{
    if(size == 0 || size == 1)  // base case
        return true;    
    if(arr[0] > arr[1])
        return false;
    else
    {
        bool ans = is_sorted(arr+1 , size-1);
        return ans;
    }
}

int main()
{
    int arr[100];
    int size;
    cout << "Enter size of array : ";
    cin >> size;

    cout << "Enter element is array : ";
    for(int i = 0 ; i < size; i++)
        cin >> arr[i];

    if(is_sorted(arr,size))
        cout << "Array is sorted";
    else
        cout << "Unsorted";
    return 0;
}