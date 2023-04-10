#include<iostream>
using namespace std;

int peakElementInMountain(int arr[], int size);

int main()
{
    int arr[5] = {0,3,7,9,0};
    cout << "Peak Element is : " << peakElementInMountain(arr,5
    );
    return 0;
}

int peakElementInMountain(int arr[], int size)
{
    int s = 0, e = size-1;

    int mid = s + (e - s) / 2;

    while(s < e)
    {
        if(arr[mid] < arr[mid+1])
            s = mid + 1;
        else
            e = mid;
        mid = s + (e - s) / 2;
    }
    return arr[mid];
}