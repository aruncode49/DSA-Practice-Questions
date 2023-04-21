#include<iostream>
using namespace std;

int fast_expo(int x, int n, int m)
{
    // Write your code here.
	int res = 1;

    while(n != 0)
    {
        if(n & 1) // n is odd
        {
            res = (1LL * (res) * (x)%m)%m;
        }
        x = (1LL * (x)%m * (x)%m)%m;
        n = n >> 1;
    }

    int ans = 1LL * res % m;
    return ans;
}

int main()
{
    int x,n,m;
    cin >> x >> n >> m;

    int ans = fast_expo(x,n,m);
    cout << "Ans = "<< ans;
    return 0;
}