#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int n,digit,ans=0;
    bool flag = 0;

    cout<<"Enter number: ";
    cin >> n;

    while(n)
    {
        digit = n % 10;

        if(ans > INT_MAX/10 || ans < INT_MIN/10)
        {
            flag = 1;
            break;
        }
        
        ans = ans * 10 + digit;
        n = n/10;
    }

    if(flag == 1)
    {
        cout<<"Invalid Number";
    }
    else
    {
        cout<<"Reverse is : "<<ans;
    }
   
}