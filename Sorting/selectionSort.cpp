#include<iostream>
using namespace std;

void selectionSort(int arr[], int n);
void printArray(int arr[], int n);

int main()
{
    int arr[4] = {4,8,2,5};
    selectionSort(arr,4);
    printArray(arr,4);
    return 0;   
}

// function for selection sort
void selectionSort(int arr[], int n)
{
   for(int i = 0; i < n-1; i++)
   {
        int minIndex = i;

        for(int j = i+1; j < n; j++)                                            
        {
            if(arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
   }
}

// function for print the array
void printArray(int arr[], int n)
{
    for(int i = 0; i<n; i++)
        cout << arr[i] << " ";
}