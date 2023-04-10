// Note: In insertion sort we will not use swapping we will use shifting.

#include<iostream>
using namespace std;

void insertionSort(int arr[], int n);
void inputInArray(int arr[], int n);
void printArray(int arr[], int n);

int main()
{
    int arr[100];
    int size;
    cout << "Enter size of array : ";
    cin >> size;
    inputInArray(arr,size);
    insertionSort(arr,size);
    printArray(arr,size);
    return 0;
}

void insertionSort(int arr[], int n)
{
    for(int i = 1; i < n; i++)  // baad ke element
    {
        int temp = arr[i];
        int j; // declaring j outside the loop
        for(j = i - 1; j >= 0; j--) // pehle ke element
        {
            if(arr[j] > temp) // shifting
            {   
                arr[j+1] = arr[j];
            }
            else // ruk jao
            {
                break;
            } 
        }
        arr[j+1] = temp;
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