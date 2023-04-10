// find the largest distance between any two stalls.
// {4,1,2,3,6} = 1-6 = 5;

#include <algorithm>
#include<iostream>
using namespace std;

int aggressiveCows(int arr[], int n, int m);
bool isPossibleSolution(int arr[], int n, int m, int mid);

int main()
{
    int size,cows;
    int stalls[100];
    cout << "Enter size of array: ";
    cin >> size;
    cout << "Enter elements in array: ";
    for(int i = 0; i < size; i++)
        cin >> stalls[i];
    cout << "Enter number of cows : ";
    cin >> cows;
    // sort the array before function call;
    sort(begin(stalls), end(stalls));
    // now call the function
    int ans = aggressiveCows(stalls,size,cows);
    cout << "Ans = " << ans;
    return 0;
}

int aggressiveCows(int arr[], int n, int m)
{
    // first step to find the search space
    // search space = a region in which our ans lies;

    int s = 0;
    int e = arr[n-1];   +
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s <= e)
    {
        if(isPossibleSolution(arr,m,n,mid))
        {
            ans = mid;
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

bool isPossibleSolution(int arr[], int n, int m, int mid)
{
    int cowCount = 1;
    int lastPos = arr[0];

    for(int i = 0; i < n; i++)
    {
        if(arr[i] - lastPos >= mid)
        {
            cowCount++;
            if(cowCount == m)
            {
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}