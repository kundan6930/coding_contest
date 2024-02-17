#include <bits/stdc++.h>
using namespace std;
using ll=long long;
 ll n,k;
bool solve(ll m,vector<ll>&a)
{
     ll s=m*k;
     for(int i=0;i<n;i++)
     {
        s-=min(m,a[i]);
        if(s<=0)
        {
            return true;
        }
     }
     return false;
}
int main (){
int t;
cin>>t;
while(t--)
{
   
    cin>>n>>k;
    vector<ll>a(n);
     ll sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(k>n)
    {
        cout<<"0"<<endl;
    }
    else
    {
    ll s=0,e=(sum/k)+1,ans=0;
    while(s<=e)
    {
        ll m=(s+e)/2;  
        if(solve(m,a))
        {
           ans=m;
           s=m+1;
        }
        else
        {
            e=m-1;
        }
     }
    cout<<ans<<endl;
    }
}
    return 0;
}