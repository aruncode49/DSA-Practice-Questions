#include<iostream>
using namespace std;

int firstOccurence(int arr[], int size, int key);   // declaration  
int lastOccurence(int arr[], int size, int key);    // declaration

int main()
{
    int even[6] = {2,4,6,6,6,6};
    
    cout << "first occurence is : " << firstOccurence(even,6,6) << endl;
    cout << "last occurence is : " << lastOccurence(even,6,6);
}

// finding first occurence (left most element)
int firstOccurence(int arr[], int size, int key)
{
    int s = 0;
    int e = size-1;

    int mid = s + (e-s)/2;
    int ans;
    while(s <= e)
    {
        if(key == arr[mid])
        {
            ans = mid;
            e = mid-1;
        }
        else if(key > arr[mid])
            s = mid+1;
        else if(key < arr[mid])
            e = mid-1;

        mid = s + (e-s)/2;
    }
    return ans;
}

// finding last occurence (right most element)
int lastOccurence(int arr[], int size, int key)
{
    int s = 0;
    int e = size-1;

    int mid = s + (e-s)/2;
    int ans;
    while(s <= e)
    {
        if(key == arr[mid])
        {
            ans = mid;
            s = mid+1;
        }
        else if(key > arr[mid])
            s = mid+1;
        else if(key < arr[mid])
            e = mid-1;

        mid = s + (e-s)/2;
    }
    return ans;
}