#include<iostream>
#include<limits.h>
using namespace std;

void input(int arr[][10], int row, int col)
{
    cout << "Enter elements in array: ";
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void row_wise_sum(int arr[][10], int row, int col)
{
    cout << "Row wise sum is : " << endl;
    for(int i = 0; i < row; i++)
    {   int sum = 0;
        for(int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}

int maximum_row_sum(int arr[][10], int row, int col)
{
    int max = INT_MIN;
    int index = -1;
    for(int i = 0; i < row; i++)
    {   int sum = 0;
        for(int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        if(sum >= max)
        {
            max = sum;
            index = i;
        }
    }
    cout << "Maximum row sum is : " << max << endl;
    return index;
}

int main()
{
    int arr[10][10];

    // generalize matrix;
    int row,col;
    cout << "Enter row : ";
    cin >> row;
    cout << "Enter col : ";
    cin >> col;

    // input in array
    input(arr,row,col);

    // row wise sum 
    // row_wise_sum(arr,row,col);

    // largest row sum
    int ans = maximum_row_sum(arr,row,col);

    cout << "Index of maxium row sum is : " << ans << endl;

    return 0;
}