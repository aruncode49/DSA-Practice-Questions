#include<iostream>
using namespace std;

void spiral_matrix(int arr[][10], int n, int m)
{
    int count = 0;
    int startRow = 0;
    int startCol = 0;
    int endRow = n-1;
    int endCol = m-1;

    int matrix = n*m;

    while(count < matrix)
    {
        // print start Row
        for(int index = startCol; index <= endCol && count < matrix; index++)
        {
            cout << arr[startRow][index] << " ";
            count++;
        }
        startRow++;

        // print end Col
        for(int index = startRow; index <= endRow && count < matrix; index++)
        {
            cout << arr[index][endCol] << " ";
            count++;
        }
        endCol--;

        // print end Row
        for(int index = endCol; index >= startCol && count < matrix; index--)
        {
            cout << arr[endRow][index] << " ";
            count++;
        }
        endRow--;

        // print start col
        for(int index = endRow; index >= startRow && count < matrix; index--)
        {
            cout << arr[index][startCol] << " ";
            count++;
        }
        startCol++;
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

    spiral_matrix(arr,row,col);

    return 0;
}