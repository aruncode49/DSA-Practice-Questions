#include<iostream>
using namespace std;

void pair_sum(int arr[], int size, int num);

int main()
{
    int arr[100];
    int size;

    cout<<"Enter size: ";
    cin>>size;

    cout<< "Enter elements in array: ";
    for(int i = 0; i<size; i++)   
        cin >> arr[i];

    int n;
    cout<<"Enter sum for pairs : ";
    cin >> n;

    pair_sum(arr,size,n);
    return 0;
}

void pair_sum(int arr[], int size, int num)
{
    for(int i = 0; i<size-1; i++)
    {
        for(int j = i+1; j<size; j++)
        {
            if((arr[i] + arr[j]) == num)
            {
                if(arr[i] < arr[j])
                    cout<< "("<<arr[i] <<","<< arr[j]<< ") ";
                else
                    cout<< "("<<arr[j] <<","<< arr[i]<< ") ";
            }
        }
    }    
}