#include<iostream>
using namespace std;

int partition(int *arr, int s, int e)
{
    int pivot = arr[s];
    int count = 0;

    // check how many element is smaller than pivot element;
    for(int i = s+1; i <= e; i++)
    {
        if(pivot >= arr[i])
            count++;
    }

    int pivotIndex = s + count; // pivot index

    // now swap this pivot element with its accurate index
    swap(arr[s],arr[pivotIndex]);

    // now make this pivot element sorted from both part
    // i.e its right elements are greater than that element
    // and its left elements are smaller than that element

    int i = s;
    int j = e;

    while(i < pivotIndex && j > pivotIndex)
    {
        while(arr[i] <= pivot)
        {
            i++;
        }
        while(arr[j] > pivot)
        {
            j--;
        }
        if(i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;
}


void quickSort(int *arr, int s, int e)
{
    // base case
    if(s >= e)
        return ;

    // partition karenge 
    int p = partition(arr,s,e);

    // ab left part ko sort karenge
    quickSort(arr,s,p-1);

    // ab right part ko sort karenge
    quickSort(arr,p+1,e);
}


int main()
{
    int arr[7] = {9, 9, 9, 8, 2, 3, -6 };
    int n = 7;

    quickSort(arr,0,n-1);
    for(int i = 0 ; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}