#include<iostream>
using namespace std;

void say_digit(int n)
{
    // for mapping digits with their words
    string arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    if(n == 0) // base case
        return;

    int digit = n % 10; // processing part
    n = n / 10;

    say_digit(n);   // recursive call

    // now print desire output
    cout << arr[digit] << " ";
}

int main()
{
    int n;
    cout << "Enter your number : ";
    cin >> n;
    say_digit(n);
    return 0;
}