#include <iostream>
using namespace std;

int gcd(int nums[], int size)
{
    int min = 10000;
    int max = -1;

    int n = size;

    for (int i = 0; i < n; i++)
    {
        if(min > nums[i])
            min = nums[i];

        if(max < nums[i])
            max = nums[i];
    }

    while (min != max)
    {
        if(max > min)
        {
            max = max - min;
        }
        else
        {
            min = min - max;
        }
    }

    return max; // return any because (a == b)
}

int main()
{
    int arr[100];
    int size;
    cout << "Enter size: ";
    cin >> size;

    cout << "Enter element in array : ";
    for (int i = 0; i<size; i++)
        cin >> arr[i];

    int ans = gcd(arr,size);

    cout << "GCD = "<< ans;
    
    return 0;
}