#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int num,i,pow=1;
    cout<<"Enter a number: ";
    cin>>num;

    for(i=0; i<=30; i++)   
    {
        if(num == pow)
        {
            cout<<"Power of two";
            break;
        }

        if(pow > INT_MAX/2)
            break;

        pow = 2 * pow;
    }
}