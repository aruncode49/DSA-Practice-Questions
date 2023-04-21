// each row is sorted in ascending order
// each colum is sorted in ascending order

#include<iostream>
using namespace std;

bool isfound(int arr[][10], int row, int col, int target)
{
    int rowIndex = 0;
    int colIndex = col-1;

    while(rowIndex < row && colIndex >= 0)
    {
        int element = arr[rowIndex][colIndex];

        if(element == target)
            return true;
        if(element < target)
            rowIndex++;
        else
            colIndex--;
    }
    return false;
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
    int target;
    cout << "Enter target element : ";
    cin >> target;
    if(isfound(arr,row,col,target))
        cout << "Element Found";
    else
        cout << "Not Found";
    return 0;
}