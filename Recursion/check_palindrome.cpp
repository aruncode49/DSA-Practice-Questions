#include<iostream>
#include<string>
using namespace std;

bool check_palindrome(string &str, int s, int e)
{
    if(s > e)   // base case
        return true;
    if(str[s] != str[e])    // check one case
        return false;   
    else    // make recursive call
    {
        s++;
        e--;
        check_palindrome(str,s,e);
    }
}

int main()
{
    string s = "xoxox";
    if(check_palindrome(s,0,s.length()-1))
        cout << "Palindrome String";
    else
        cout << "Not Palindrome";
    return 0;
}