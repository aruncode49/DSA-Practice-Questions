#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,ans=0,i=0,digit;

    cout<<"Enter number in binary: ";
    cin >> n;

    while(n != 0)
    {
        digit = n % 10;
        if(digit)
            ans = pow(2,i) + ans;
        i++;
        n = n/10;
    }
    cout<<"Answer is :"<< ans;
}