#include<iostream>
#include<limits.h>
using namespace std;
void intersection(int arr1[], int arr2[], int n1, int n2);


// given array is already in sorted order;

int main()
{
    int arr1[] = {1,2,2,2,3,4};
    int arr2[] = {2,2,3,3};

    intersection(arr1,arr2,6,4);
    return 0;

}

// void intersection(int arr1[], int arr2[], int n1, int n2)
// {
//     for(int i = 0; i<n1; i++)
//     {
//         for(int j = 0; j<n2; j++)
//         {
//             if(arr1[i] < arr2[j])  
//                 break;
//             if(arr1[i] == arr2[j])
//             {
//                 cout<<arr1[i]<<" ";
//                 arr2[j] = INT_MIN;
//                 break;
//             }
//         }
//     }
// }


// Another method for better time complexity

 void intersection(int arr1[], int arr2[], int n, int m)
{
    int i=0,j=0;
    while( i < n && j < m)
    {
        if(arr1[i] == arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j])
            i++;
        else if(arr1[i] > arr2[j])
            j++;
    }
}