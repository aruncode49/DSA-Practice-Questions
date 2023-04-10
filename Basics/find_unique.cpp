#include<iostream>
using namespace std;
int find_unique(int arr[], int size);

int main()
{
    int size;
    cout<<"Enter odd size: ";
    cin >> size;
    int arr[40];
    cout<<"Enter element in array: ";
    for(int i = 0; i<size; i++)
        cin >> arr[i];
    cout<<"Unique element in array: "<<find_unique(arr,size);
    return 0;
}

int find_unique(int arr[], int size)
{
    int ans = 0;
    for(int i =0; i<size; i++)
        ans = ans ^ arr[i];
    return ans;
}