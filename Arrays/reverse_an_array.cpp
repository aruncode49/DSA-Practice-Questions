#include<iostream>
#include<vector>

using namespace std;

// reverse function
vector<int> reverse(vector <int> v)
{
    int s = 0, e = v.size()-1;

    while( s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

// print fuction for vector
void print(vector <int> v)
{
    for (auto it : v)
        cout << it << " ";
}

int main()
{
    vector<int> v;

    // input in array
    v.push_back(4);
    v.push_back(3);
    v.push_back(7);
    v.push_back(9);
    v.push_back(1);
    v.push_back(8);

    // reverse vector
    vector<int> ans = reverse(v);

    cout << "Printing reverse array : ";
    
    // print vector
    print(ans);

    cout << endl;

    return 0;    
}