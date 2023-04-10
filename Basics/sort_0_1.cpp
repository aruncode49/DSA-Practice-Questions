#include<iostream>
using namespace std;

void sort_0_1(int[], int);
void printArray(int[], int);

int main()
{
    int arr[] = {1,1,0,0,0,1,0,1,0};
    sort_0_1(arr,9);
    printArray(arr,9);
    return 0;
}

void sort_0_1(int arr[], int size)
{
    int i=0;
    int j = size-1;
    while(i < j)
    {
        while(arr[i] == 0 && i<j)
            i++;
        while(arr[j] == 1 && i<j)
            j--;

        if(i<j)       
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }          
    }
}

void printArray(int arr[], int size)
{
    for(int i =0; i<size; i++)
        cout<<arr[i]<<" ";
}