#include<iostream>
using namespace std;
int duplicate(int arr[], int size);
int main()
{
    int arr[20];
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter elements in array: ";
    for(int i = 0; i<size; i++)
        cin >> arr[i];

    cout << "Duplicate number is : " << duplicate(arr,size);
    return 0;
}

int duplicate(int arr[], int size)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        count = count ^ arr[i];
        if(count == 0)
            return arr[i];
    }
}