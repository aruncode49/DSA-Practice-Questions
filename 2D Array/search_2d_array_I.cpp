// each row is sorted in ascending order from left to right
// and each row first integer is greater than its previous row integer

#include<iostream>
using namespace std;

bool isfound(int arr[][10], int row, int col, int target)
{
    int s = 0;
    int e = row * col -1;
    int mid = s + (e-s)/2;
    while(s <= e)
    {
        int element = arr[mid/col][mid%col];

        if(element == target)
            return true;
        
        else if(element < target)
            s = mid+1;

        else if(element > target)
            e = mid-1;

        mid = s + (e-s)/2;
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