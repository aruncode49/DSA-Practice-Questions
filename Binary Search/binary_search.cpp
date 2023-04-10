#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key);


int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;

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

int main()

{
    int even[6] = {2,4,6,8,12,14};
    int odd[5] = {1,3,5,7,9};

    cout << "Key is on : " << binarySearch(even,6,14) << endl;
    cout << "Key is on : " << binarySearch(odd,5,7);

    return 0;
}