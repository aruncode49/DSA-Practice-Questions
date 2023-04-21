#include<iostream>
#include<string>
using namespace std;

string replace_spaces(string &s)
{
    string newString = "";
    for(int i = 0; i<s.length(); i++)
    {
        if(s[i] == ' ')
        {
            newString.push_back('@');
            newString.push_back('4');
            newString.push_back('0');
        }
        else
        {
            newString.push_back(s[i]);
        }
    }
    return newString;
}

int main()
{
    string s = "my name is arun kumar";
    string newString = replace_spaces(s);
    cout << newString;
    return 0;
}