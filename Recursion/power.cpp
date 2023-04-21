#include<iostream>
using namespace std;

// This is most optimize way of finding power of a number using recursion

int power(int num, int pow)
{
    if(pow == 0)
        return 1; 

    if(pow == 1)
        return num;

    // recursive call;
    int ans = power(num,pow/2);

    if(pow & 1) // for odd power
       return (num * ans * ans);
    else   // for even power
        return (ans * ans);
}

int main()
{
    int n,p;
    cout << "Enter number : ";
    cin >> n;
    cout << "Enter power : ";
    cin >> p;
    int ans = power(n,p);
    cout << "Ans = " << ans;
    return 0;
}