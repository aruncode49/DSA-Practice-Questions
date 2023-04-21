#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout << "Enter number of row : ";
    cin >> row;
    cout << "Enter number of col : ";
    cin >> col;

    // creating 2D array
    int **arr = new int*[row];
    for(int i = 0; i < row; i++)
    {
        arr[i] = new int[col];  
    }

    // input in array
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // output of array
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // now releasing memory
    for(int i = 0; i < row; i++) // first release col memory
    {
        delete [] arr[i];
    }

    delete [] arr;  // then release pointer memory

    return 0;

}