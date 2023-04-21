#include<iostream>
using namespace std;

void transpose(int arr[][10], int n)
{
    for(int i = 0; i <  n; i++)
    {
        for(int j = i; j < n; j++)
        {
            if(i != j)  // when i = j, then don't swap elements
                swap(arr[i][j], arr[j][i]);
        }
    }
}

void rotate(int arr[][10], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n/2; j++)
        {
                swap(arr[i][j], arr[i][n-j-1]);
        }
    }
}

void print(int arr[][10], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[10][10];

    // generalize matrix;
    // n x n matrix;

    cout << "Enter number of rows and col : ";
    int n;
    cin >> n;

    cout << "Enter elements in array: ";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // print before rotation
    cout << "Matrix before rotation" << endl;
    print(arr,n);

    // first take transpose of the matrix
    transpose(arr,n); 

    // then swap the neccessary row's for rotatation
    rotate(arr,n);

    // print the matrix
    cout << "Matrix after rotation" << endl;
    print(arr,n);

    return 0;
}