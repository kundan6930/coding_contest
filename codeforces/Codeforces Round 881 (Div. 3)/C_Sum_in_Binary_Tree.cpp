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
    ll s=0;
    while(n!=0)
    {
        s+=(n);
        n/=2;
    }
  cout<<s<<endl;
}
    return 0;
}