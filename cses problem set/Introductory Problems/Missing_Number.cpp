#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    ll xr=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        xr=xr^a[i]^(i+1);
    }
    cout<<xr<<endl;
    return 0;
    }