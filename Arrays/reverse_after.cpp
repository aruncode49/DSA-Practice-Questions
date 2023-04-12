#include<iostream>
#include<vector>
using namespace std;

// reverse after a index function
vector<int> reverse_after(vector <int> v, int m)
{
    int s = m+1, e = v.size()-1;
    while( s <= e )
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
    vector<int> v1 = {1,2,3,4,5,6};
    vector<int> v2 = {10,9,8,7,6};

    // reverse vector
    vector<int> ans = reverse_after(v1,3);  // call v1

    cout << "Printing reverse array : ";
    // print v1 vector
    print(ans);
    cout << endl;

    ans = reverse_after(v2,2);  // call v2

    cout << "Printing reverse array : ";
    // print v2 vector
    print(ans);
    cout << endl;

    return 0;    
}