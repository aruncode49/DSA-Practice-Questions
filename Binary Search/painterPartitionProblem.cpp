#include<iostream>
using namespace std;

int painterPartition(int arr[], int n, int m);
bool isPossibleSolution(int arr[], int n, int m, int mid);

// ans lies in between (search space) = 0 to sum of all item of array
// same problem like book allocation problem

int main()
{
    int size,painter;
    int boards[100];
    cout << "Enter size of board array: ";
    cin >> size;
    cout << "Enter elements in array: ";
    for(int i = 0; i < size; i++)
        cin >> boards[i];
    cout << "Enter number of Painter: ";
    cin >> painter;
    int ans = painterPartition(boards,size,painter);
    cout << "Ans = " << ans;
    return 0;
}

// n = size of array
// m = total painters

int painterPartition(int arr[], int n, int m)
{
    int s = 0, sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    int e = sum;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s < e)
    {
        if(isPossibleSolution(arr,n,m,mid))
        {
            ans = mid;  // store mid in ans
            e = mid-1;  // move towards left
        }
        else
        {
            s = mid+1;  // move towards right
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

bool isPossibleSolution(int arr[], int n, int m, int mid)
{
    int boardSum = 0;
    int painterCount = 1;

    for(int i = 0; i < n; i++)
    {
        if(boardSum + arr[i] <= mid)
        {
            boardSum += arr[i];
        }
        else
        {
            painterCount++;
            if(painterCount > m || arr[i] > mid)
            {
                return false;
            }
            boardSum = arr[i];
        }
    }
    return true;
}