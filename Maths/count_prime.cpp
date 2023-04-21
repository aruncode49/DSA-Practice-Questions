#include<iostream>
#include<vector>
using namespace std;

// Sieve of Erastosthenes Algorithm
int count_prime(int n)
{
    int count = 0;
    // first mark all number as prime or true
    vector<bool> prime(n+1, true);

    prime[0] = prime[1] = false;

    for(int i = 2; i < n; i++)
    {
        if(prime[i])
            count++;

            // multiple of a prime number will not be prime
            for(int j = 2*i; j < n; j = j+i)
                prime[j] = false;
    }
    return count; 
}

int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    
    int ans = count_prime(n);
    cout << "Number of prime no. less than "<< n << " is " << ans;
    return 0;
}