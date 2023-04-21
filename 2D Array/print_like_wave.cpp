#include<iostream>
#include<vector>
using namespace std;

void print_like_wave(int arr[][10], int row, int col)
{
    for(int i = 0; i < col; i++)    // start from col
    {
        if( i % 2 == 0) // even -> top to bottom
        {
            for(int j = 0; j < row; j++)
                cout << arr[j][i] << " ";
        }
        else    // odd -> bottom to top
        {
            for(int j = row-1; j >= 0; j--)
                cout << arr[j][i] << " ";
        }
    }
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

    cout << "Enter elements in array: ";
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    print_like_wave(arr,row,col);
    return 0;
}