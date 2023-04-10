#include<iostream>
using namespace std;

void printArray(int arr[], int size);
void swap_alternate(int arr[], int size);

void swap_alternate(int arr[], int size)
{
    for(int i = 0; i < size-1; i += 2)
        swap(arr[i],arr[i+1]);
}

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
        cout << arr[i] <<" ";
}

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    int arr[100];
    cout<<"Enter element in array: ";
    for(int i = 0; i< size; i++)
        cin >> arr[i];

    swap_alternate(arr,size);
    printArray(arr,size);
    return 0;
}