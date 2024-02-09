#include <bits/stdc++.h>
using namespace std;
long long calculate(long long p,long long q)
{
    long long mod = 998244353, expo;
    expo = mod - 2;
    while (expo) { 
        if (expo & 1) 
        {
            p = (p * q) % mod;
        }
        q = (q * q) % mod;

        expo >>= 1;
    }
    return p;
} 
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 



        
    }
    return 0;
    }