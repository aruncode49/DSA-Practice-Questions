#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> add_two_array(vector<int> v1, vector<int> v2)
{
    int i = v1.size()-1;
    int j = v2.size()-1;

    int carry = 0;
    vector<int> ans;    // new vector storing sum

    while(i >= 0 && j >= 0)
    {
        int sum = v1[i] + v2[j] + carry;
        carry = sum/10; 
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;       
    }

    // first case   when v1 = {1} -> remaining elements
    while(i >= 0)
    {
        int sum = v1[i] + carry;
        carry = sum/10; 
        sum = sum % 10;
        ans.push_back(sum);
        i--;      
    }

    // second case  when v2 = {1} -> remaining elements
    while(j >= 0)
    {
        int sum = v2[j] + carry;
        carry = sum/10; 
        sum = sum % 10;
        ans.push_back(sum);
        j--;      
    }

    // third case  when carry remains
    while(carry != 0)
    {
        int sum = carry;
        carry = sum/10; 
        sum = sum % 10;
        ans.push_back(sum);    
    }

    // reverse elements of ans vector for accurate output
    reverse(ans.begin(), ans.end());
    return ans;
}

void print(vector <int> v)
{
    for (auto it : v)
        cout << it << " ";
}

int main()
{
    vector<int> v1 = {1,2,3,4};
    vector<int> v2 = {8,8,8,8};
    vector<int> ans = add_two_array(v1,v2); // add function call
    print(ans);
    return 0;
}