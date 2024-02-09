#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll power(ll n)
{
    ll ans=1,i=0;
    while(i<n)
    {
        ans*=2;
        i++;
    }
    return ans;
}
int main (){
ll m;
cin>>m;
vector<ll>a(31);
 vector<ll>presum(31);
for(ll i=0;i<m;i++)
{
    ll t,v;
    cin>>t>>v;
    if(t==1)
    {
        a[v]++;
        ll k1=0;
        for(ll i=0;i<31;i++)
          {
            if(a[i]>0)
            {
              k1+=(a[i] *power(i));
            }
            presum[i]=k1;
          }
    }
    else
    {
     vector<ll>b(31);
    for(ll i=0;i<31;i++)
    {
        ll k=(v>>i)&1;
        b[i]=k;
    }
    ll k2=0;
    int f=0;
    for(ll i=0;i<31;i++)
    {
       ll k=b[i]*power(i); 
       k2+=k;
       if(presum[i]<k2)
       {
          f=1;
          break;
       }
    }
    if(f==1)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    }
}
    return 0;
}