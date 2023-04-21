#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

char tolowercase(char a)
{
    if((a >= 'a' && a <= 'z') || (a >= '0' && a <= '9'))
        return a;
    else
        return a - 'A' + 'a';
}

bool isvalid(char x)
{
    if( (x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z') || (x >= '0' && x <= '9'))
        return true;
    return false;
}

bool palindrome(string &str)
{
    int s = 0;
    int e = str.size()-1;
    while(s <= e)
    {
        while(!(isvalid(str[s])))
            s++;  
        while(!(isvalid(str[e])))
            e--;  
        if(tolowercase(str[s]) != tolowercase(str[e]))
            return false;
        else
        {
            s++;
            e--;
        }
    }
    return true;
}

int main()
{
    string str = "f";
    bool ans = palindrome(str);
    ans == 1 ? cout << "String is Palindrome" : cout << "Not Palindrome";
    return 0;
}


