#include<iostream>
using namespace std;

bool unique_occurence(int arr[],int size);

int main()
{
    int arr[20];
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter elements in array: ";
    for(int i = 0; i<size; i++)
        cin >> arr[i];
    bool ans = unique_occurence(arr,size);
    cout<<ans;
    return 0;
}

bool unique_occurence(int arr[],int size)
{
    for(int i = 0; i < size-1; i++)  
    {
        for(int j = i + 1; j < size; j++)
        {
           if(arr[i] > arr[j])
           {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
           }
        }
    }

    int count1 = 0, count2 = 1;
    for(int i = 0; i < size-1; i++)  
    {
        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] == arr[j])
                count1++;
        }
    }

    if(count1 == count2)
        return false;
    return true;
}