#include<iostream>
#include<string>
using namespace std;

string remove_part(string &s, string &part)
{
    while(s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main()
{
    string s,part;
    cout << "Enter your string: ";
    cin >> s;
    cout << "Enter your part: ";
    cin >> part;
    cout << "Ans = " << remove_part(s,part);
    return 0;
}