#include<iostream>
using namespace std;

int is_Even(int num);

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    if(is_Even(n))
        cout<<"Number is odd";
    else 
        cout<<"Number is even";
}

int is_Even(int num)
{
    if(num & 1)
        return 1;
    else
        return 0;
}