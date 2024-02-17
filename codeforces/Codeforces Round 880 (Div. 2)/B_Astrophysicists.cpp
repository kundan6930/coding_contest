#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll solve(ll n,ll k,ll g ,ll m)
{
    
}
int main (){
int t;
cin>>t;
while(t--)
{
    ll n,k ,g;
    cin>>n>>k>>g;
     ll k1;
    if(g%2==0)
    {
       k1=(g/2)-1;
    }
    else{
       k1=g/2;
    }
    ll p=n*k1;
    ll t=k*g;
    if(p>t)
    {
        cout<<t<<endl;
    }
    else 
    {
        ll p=n*k1;
       ll r=t-p;
       r+=(g-1);
       r=r/g;
       r*=g;
       p=r;
       
       cout<<t-p<<endl;
    }
    
}
    return 0;
}