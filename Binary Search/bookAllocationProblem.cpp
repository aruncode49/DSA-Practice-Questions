#include<iostream>
using namespace std;

int bookAllocation(int book[], int n, int m);
bool isPossibleSolution(int arr[], int n, int m, int mid);

int main()
{
    int size,student;
    int book[100];
    cout << "Enter size of array: ";
    cin >> size;
    cout << "Enter elements in array: ";
    for(int i = 0; i < size; i++)
        cin >> book[i];
    cout << "Enter number of students: ";
    cin >> student;
    int ans = bookAllocation(book,size,student);
    cout << "Ans = " << ans;
    return 0;
}

int bookAllocation(int book[], int n, int m)
{
    int s = 0;
    int sum = 0;
    for(int i = 0; i < n; i++)
    sum = sum + book[i];
    int e = sum;
    int ans = -1;
    int mid = s+(e-s)/2;

    while(s < e)
    {
        if(isPossibleSolution(book,n,m,mid))
        {
            ans = mid;
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

bool isPossibleSolution(int arr[], int n, int m, int mid)
{
    int pageSum = 0;
    int studentCount = 1;

    for(int i = 0; i < n; i++)
    {
        if(pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if(studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];            
        }
    }
    return true;
}