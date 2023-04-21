#include<iostream>
#include<vector>
using namespace std;


int compress(vector<char> &v)
{
    int i = 0;
    int ansIndex = 0;
    int n = v.size();

    while(i < n)
    {
        int j = i+1;
        while(j < n && v[i] == v[j])
        {
            j++;
        }

        // yaha kab aaoge
        // ya to vector pura traverse ho gya ho
        // ya fir new/ Diffrent character encounter ho gya ho

        // old character ko vector mein store kro
        v[ansIndex++] = v[i];

        int count = j-i;

        if( count > 1) 
        {
            // convert that count in string
            // converting counting into single digit and saving in answer
            string cnt = to_string(count);
            for(auto ch : cnt)
            {
                v[ansIndex++] = ch;
            }
        }
        // now move to next character which is on j
        i = j;
    }
    return ansIndex;
}


int main()
{
    vector<char> v = {'a','a','b','b','c','c','c'};
    int ans = compress(v);
    cout << "Compressed size : "<< ans;
    return 0;
}