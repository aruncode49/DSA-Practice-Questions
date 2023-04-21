#include<iostream>
#include<string>
using namespace std;

char max_occ_char(string &s)
{
    int arr[26] = {0};

    // create an array of count of characters
    for(int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0; // index of character
        number = ch - 'a';
        arr[number]++;  // increase value at that index
    }

    int ans = 0, maxi = -1;
    for(int i = 0; i < 26; i++)
    {
        if(maxi < arr[i]){
            maxi = arr[i];
            ans = i;
        }       
    }
    char newAns = ans + 'a';
    return newAns;
}


int main()
{
    string s;
    cout << "Enter your string: ";
    cin >> s;
    char ans = max_occ_char(s);
    cout << "Max Occ Character is : "<< ans;
    return 0;
}