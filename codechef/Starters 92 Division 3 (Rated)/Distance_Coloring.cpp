#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
ll t;
cin>>t;
ll m=1e9+7;
while(t--)
{
    ll n,k;
    cin>>n>>k;
    ll p=1;
    ll i=0;
    ll n1=k;
    for(ll i=0;i<n;i++)
    {
    if(i<k)
    {
        p*=n1;
        p=p%m;
        if(i!=k-1)
        {
         n1--;
        }
    }
    else{
        p*=n1;
        p=p%m;
    }
    }
    cout<<p<<endl;
}
    return 0;
}