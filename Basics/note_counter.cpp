// wap to calculate number of notes required (100, 20, 10, 1) for a number.

#include<iostream>
using namespace std;

int main()
{
    int amount,note,rem;

    cout << "Enter amount: ";
    cin >> amount;

    switch (1)
    {
    case 1: 
        note = amount / 100;
        rem = amount % 100;
        cout << "100 = "<<note<<" notes"<<endl;
    
    case 2: 
        note = rem / 20;
        rem = rem % 20;
        cout << "20 = "<<note<<" notes"<<endl;

    case 3: 
        note = rem / 10;
        rem = rem % 10;
        cout << "10 = "<<note<<" notes"<<endl;

    default:
        break;
    }
}