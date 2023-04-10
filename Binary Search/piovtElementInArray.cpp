// pivot element = largest or smallest element after rotating a sorted array.
// In our case we will try to find the smallest element with the help of binary search.

#include<iostream>
using namespace std;

int getpivot(int arr[], int size);

int main()
{
    int arr[5] = {3,8,10,17,1};
    cout << "Pivot Element: " << getpivot(arr,5);
    return 0;
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
    return arr[mid];
}