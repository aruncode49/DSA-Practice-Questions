#include<iostream>
using namespace std;

void reverse(int arr[], int size);
void printArray(int[], int);

int main()
{
    int size;
    cout << "Enter size : "<<endl;
    cin >> size;

    int arr[20];    // creating array

    cout << "Enter elements in array: "<<endl;     // input in array
    for(int i = 0; i<size; i++)
        cin >> arr[i];

    reverse(arr,size);  // reverse array
    printArray(arr,size);   // printing array
    return 0;
}

void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while(start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }  
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
        cout << arr[i] <<" ";
}