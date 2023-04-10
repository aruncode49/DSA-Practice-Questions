#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n);
void inputInArray(int arr[], int n);
void printArray(int arr[], int n);

int main()
{
    int arr[100];
    int size;
    cout << "Enter size of array : ";
    cin >> size;
    inputInArray(arr,size);
    bubbleSort(arr,size);
    printArray(arr,size);
}

void bubbleSort(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {   // rounds starts from 1 to n-1;
        bool swapped = false;
        for (int j = 0; j < n-i; j++)
        {   // process elements 0 to till (n-i)ith index 
            // compare each element with its next element
            // or make a bubble of corresponding elements
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)    // i.e (our array is already sorted)
            break;
    }
}

void inputInArray(int arr[], int n)
{
    cout << "Enter elements in array : ";
    for(int i = 0; i<n; i++)
        cin >> arr[i];
}

void printArray(int arr[], int n)
{
    cout << "Sorted Array : ";
    for(int i = 0; i<n; i++)
        cout << arr[i] << " ";
}