#include<iostream>
using namespace std;

int add(int arr[], int size)
{
    if(size == 0)   // base case
        return 0;
    if(size == 1)   // base case
        return arr[0];
    int remaining_part = add(arr+1, size-1);  // recursive call
    int sum = arr[0] + remaining_part;  // processing
    return sum;
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

    int ans = add(arr,size);
    cout << "Sum is : "<< ans;
    return 0;
}