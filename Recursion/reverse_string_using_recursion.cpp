#include<iostream>
#include<string>
using namespace std;

void reverse(string &str, int s, int e)
{
    if(s > e)   // base case
        return ;

    swap(str[s], str[e]);   // solving one case
    s++;    // increase start pointer
    e--;    // decrease end pointer
    reverse(str,s,e);  // make recursive call 
}

int main()
{
    string s = "mystring arun";
    reverse(s,0,s.length()-1);
    cout << s;
    return 0;
}