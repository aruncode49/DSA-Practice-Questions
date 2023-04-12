// eg-> A = {0,1,0,3,4} move all zeros in right side;
// output = {1,3,4,0,0}

#include<iostream>
#include<vector>
using namespace std;

void move_zeros(vector<int> &v)
{
    int non_zero = 0; 
    for(int j = 0; j < v.size(); j++)
    {
        if(v[j] != 0)   // if(v[j] == 0) -> igonre
        {
            swap(v[j], v[non_zero]);
            non_zero++;
        }
    }
}

void print(vector <int> v)
{
    for (auto it : v)
        cout << it << " ";
}

int main()
{
    vector<int> v = {0,1,0,3,12};
    move_zeros(v);
    cout << "After move zero in right side : ";
    print(v);
    return 0;
}

