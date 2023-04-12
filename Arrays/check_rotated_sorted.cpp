#include<iostream>
#include<vector>
using namespace std;

bool check_rotated_sorted(vector<int> v)
{
    int count = 0;
    for(int i = 0; i < v.size()-1; i++)
    {
        if(v[i] > v[i+1])
            count++;
    }
    if(v[v.size()-1] > v[0])
        count++;

    return (count <= 1);
}


int main()
{
    vector<int> v = {1,1,1};
    bool ans = check_rotated_sorted(v);
    (ans == 1)? cout << "True": cout << "False";
    return 0;
}