#include<iostream>
using namespace std;

int nCr(int n, int r);
int factorial(int num);

int main()
{
    int n,r;
    cout<<"Enter n & r: ";
    cin>>n>>r;
    cout<<"nCr = "<< nCr(n,r);
    return 0;
}

int factorial(int num)
{
    int f = 1;
    if(num == 0)
        return 1;
    for(int i=1; i<=num; i++)
    {
        f = f * i; 
    }
    return f;
}

int nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n-r));
}