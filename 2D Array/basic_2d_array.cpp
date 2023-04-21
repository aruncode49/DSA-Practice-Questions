#include<iostream>
using namespace std;

// search function for 2d array -> Linear Search
bool isfound(int arr[][3], int target, int row, int col)
{
     for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(arr[i][j] == target)
                return true;
        }
    }
    return false;
}

int main()
{
    int arr[3][3];
    int row,col;
    row = col = 3;

    // // taking input in array -> row wise
    cout << "Enter elements in array: ";
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // // // taking input in array -> col wise
    // cout << "Enter elements in array: ";
    // for(int i = 0; i < col; i++)
    // {
    //     for(int j = 0; j < row; j++)
    //     {
    //         cin >> arr[j][i];
    //     }
    // }

    // taking output of array 
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // function for searching in 2D array

    int target;
    cout << "Enter element you want to search: ";
    cin >> target;

    if(isfound(arr,target,3,3))
        cout << "Element Found";
    else
        cout << "Not Found";
    
    return 0;
}