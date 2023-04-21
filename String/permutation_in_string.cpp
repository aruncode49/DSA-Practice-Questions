#include<iostream>
#include<string>
using namespace std;

// check function for count1 and count2
bool checkEqual(int a[], int b[])
{
    for(int i = 0; i < 26; i++)
    {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

bool isPermutation(string &s1, string &s2)
{
    // character count array for s1 string
    int count1[26] = {0};
    for(int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }

    // now traverse s2 string in window of size s1 length and compare
    int i = 0;
    int windowSize = s1.length();
    int count2[26] = {0};
    while(i < windowSize && i < s2.length())
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    // compare both counts if they are matched
    if( checkEqual(count1, count2))
        return true;

    // nahi to aage ke liye process krdo
    // now i is greater than window size (s1) but less than s2 size
    while( i < s2.length())
    {
        // add new element in window
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;
        // decrease the old character count which is now not present in window
        char oldChar = s2[i-windowSize];
        index = oldChar - 'a';
        count2[index]--;
        i++;    // update i;
        // now again check the both counts
        if( checkEqual(count1, count2))
            return true;
    }
    return false;
}


int main()
{
    string s1 = "ab";
    string s2 = "eidbaooo";
    // check permutation of s1 is present in s2
    bool ans = isPermutation(s1,s2);
    ans == 1 ? cout << "True" : cout << "False";
    return 0;
}