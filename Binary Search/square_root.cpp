#include<iostream>
using namespace std;

long long int square_root(int n);
double accurateAns(int n, int precesion, int tempAns);

int main()
{
    int num;
    cout <<"Enter number: ";
    cin >> num;
    int tempSol = square_root(num);

    double morePrecession = accurateAns(num,3,tempSol);
    cout << "Square root of " << num << " is : " << morePrecession;

    return 0;
}

long long int square_root(int n)
{
    int s=0, e=n-1;
    int ans;
    long long int mid = s+(e-s)/2;
    
    while(s <= e)
    {
        long long int square = mid * mid;

        if(square == n)
            return mid;
        else if(square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
            e = mid-1;
        mid = s+(e-s)/2;
    }
    return ans;
}

double accurateAns(int n, int precesion, int tempAns)
{
    double factor = 1;
    double ans = tempAns;

    for(int i = 0; i < precesion; i++)
    {
        factor = factor/10;
        
        for(double j = ans; j*j <= n; j = j + factor)
            ans = j;
    }
    return ans;
}