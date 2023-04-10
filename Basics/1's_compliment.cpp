#include<iostream>
using namespace std;
int main()
{
    int n,m,mask=0;
    cout<<"Enter number: ";
    cin>>n;
    m = n;

    while(m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    int ans = (~n) & mask;
    cout<<ans;
}