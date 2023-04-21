#include<iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s+(e-s)/2;

    // find length for both parts
    int len1 = mid-s+1; // left
    int len2 = e-mid;   // right

    // create two array
    int *first = new int[len1];
    int *second = new int[len2];

    // copy values in both array;
    int mainIndex = s;

    // copy in first array
    for(int i = 0; i < len1; i++)
    {
        first[i] = arr[mainIndex++];
    }

    mainIndex = mid+1;
    // copy in second array
    for(int i = 0; i < len2; i++)
    {
        second[i] = arr[mainIndex++];
    }

    // now merge both array in main array;
    int index1 = 0;
    int index2 = 0;
    mainIndex = s;

    while(index1 < len1 and index2 < len2)
    {
        if(first[index1] < second[index2])
            arr[mainIndex++] = first[index1++];
        else
            arr[mainIndex++] = second[index2++];
    }

    while(index1 < len1)
    {
         arr[mainIndex++] = first[index1++];
    }

    while(index2 < len2)
    {
         arr[mainIndex++] = second[index2++];
    }

    // now free up the memory of both dynamically array
    delete []first;
    delete []second;
}



void mergeSort(int *arr, int s, int e)
{
    if(s >= e)  // base case
        return ;

    int mid = s + (e-s)/2;

    // left part sort kr liya
    mergeSort(arr, s, mid);

    // right part sort krliya
    mergeSort(arr, mid+1, e);

    // merge both array;
    merge(arr,s,e);
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

    mergeSort(arr,0,size-1);

    for(int i = 0 ; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}