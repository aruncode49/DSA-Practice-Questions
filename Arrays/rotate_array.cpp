#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int> &v, int k)
{
    // <--------NORAML SOLUTION----------->

    // int j;
    // for(int i = 1; i <= k; i++)
    // {
    //     int temp = v[v.size()-1];

    //     for(j = v.size()-1; j > 0; j--)
    //     {
    //        v[j] = v[j-1];
    //     }
    //     v[j] = temp;
    // }

    // <-------OPTIMIZE SOLUTION------------>

    vector<int> temp(v.size());

    // copy elements in temp in rotated manner
    for(int i = 0; i < v.size(); i++)
    {
        temp[(i+k) % v.size()] = v[i];
    }

    // copy temp in v vector
    v = temp;
}

void print(vector <int> v)
{
    for (auto it : v)
        cout << it << " ";
}

int main()
{
    vector<int> v = {1,7,9,11};
    int k;  
    cout << "Enter number of rotation: ";
    cin >> k;
    rotate(v,k);  // rotate vector
    print(v);  // printing the vector
    return 0;
}