#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    vector<ll>ans;
    // outer loop will run till sqrt(n) times we can get all prime factor i<= sqrt(n) because after sqrt(n) if any no is factor of n it must not be prime because (prime*prime=prime)
    // since n is composite then n=prime*composite; and we get prime factor before and equal to sqrt(n) & composite no after sqrt(n);
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            ans.push_back(i);
            n/=i;
        }
    }
    if(n!=1)
    {
        ans.push_back(n);
    }
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
    return 0;
}