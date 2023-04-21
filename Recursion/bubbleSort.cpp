#include<iostream>
using namespace std;

void bubbleSort(int *arr, int size)
{
    // base case
    if(size == 1 || size == 0)
        return;

    bool swapping = false;

    // move one element to its right position  
    for(int i = 0; i < size-1; i++)
    {
        if(arr[i] > arr[i+1]) 
            swap(arr[i], arr[i+1]);
            swapping = true;
    }

    if(swapping = false)
        return ;

    // for further element make recursive call
    bubbleSort(arr,size-1);
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

    bubbleSort(arr,size);
    for(int i = 0 ; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}