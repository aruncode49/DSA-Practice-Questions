#include<iostream>
using namespace std;

int length(char s[])
{
    int i;
    for(i = 0; s[i]; i++);
    return i;
}

void reverse(char str[], int len)
{
    int s = 0; 
    int e = len - 1;
    while(s <= e)
    {
        swap(str[s], str[e]);
        s++;
        e--;
    }
}

void print(char str[])
{
    cout << str;
}


int main()
{
    char str[20];
    cout << "Enter your string : ";
    cin.getline(str,20);
    int len = length(str);
    reverse(str,len);
    cout << "Your reverse string : ";
    print(str);
    return 0;
}