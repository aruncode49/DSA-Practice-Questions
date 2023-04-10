#include<iostream>
using namespace std;

int main()
{
    int n, rem, ans=0, res=0;
    cout<<"Enter number: ";
    cin >> n;

    // 1. Method
    // first method with divide the number and get remainder

    while(n != 0)
    {
        rem = n % 2;
        n /= 2;
        ans = ans * 10 + rem;
    }  
    // // reverse the binary number for right output 
    while(ans != 0)
    {
        n = ans % 10;
        res = res * 10 + n;
        ans = ans/10;
    }
    cout<<res;

    // 2. Method 
    // By bitwise operator 

    // while(n != 0)
    // {
    //     rem = n & 1;
    //     ans = ans * 10 + rem;
    //     n = n >> 1;
    // }
    
    // // reverse that binary number for getting right output
    // while(ans != 0)
    // {
    //     n = ans % 10;
    //     res = res * 10 + n;
    //     ans = ans/10;
    // }
    // cout<<res;
}