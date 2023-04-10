#include<iostream>
using namespace std;
bool is_prime(int n);

bool is_prime(int n)
{
    int i;
    for(i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    int result = is_prime(num);

    if(result == 1)
        cout << "Prime number";
    else
        cout << "Not Prime number";
}