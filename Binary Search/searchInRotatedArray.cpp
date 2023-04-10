#include<iostream>
using namespace std;

// function used for this program
int searchInRotatedArray(int arr[], int size, int key);
int getpivot(int arr[], int size);
int binarySearch(int arr[], int start, int end, int key);

// start main function
int main()
{
    int arr[5] = {5,1,2,3,4};
    cout << "Key index is : " << searchInRotatedArray(arr,5,1);
    return 0;
}

int searchInRotatedArray(int arr[], int size, int key)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s)/2;
    int pivot = getpivot(arr,size);

    while(s < e)
    {
        if(key >= arr[pivot] && key <= arr[size-1])
            // apply binary search on right side or second line
            return binarySearch(arr,pivot,size-1,key);
        else
            // apply binary search on left side or first line
            return binarySearch(arr,0,pivot-1,key);      
    }
    return -1;
}

int getpivot(int arr[], int size)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s)/2;

    while(s < e)
    {
        if(arr[mid] < arr[0])
            e = mid;
        else
            s = mid + 1;

        mid = s + (e - s)/2;
    }
    return s;
}

int binarySearch(int arr[], int start, int end, int key)
{
    int mid = start + (end - start) / 2;

    while(start <= end)
    {
        if(arr[mid] == key)
            return mid;

        // go to right part
        if(key > arr[mid])
            start = mid + 1;

        // go to left part
        else
            end = mid - 1;  

        // update mid
        mid = start + (end - start) / 2;
    }
    return -1;  // if key not found
}
