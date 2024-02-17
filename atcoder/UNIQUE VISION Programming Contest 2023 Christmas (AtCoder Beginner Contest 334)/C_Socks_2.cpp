#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
ll n,k;
cin>>n>>k;
vector<ll>a(k);
for(int i=0;i<k;i++)
{
    cin>>a[i];
}
ll s=0;
for(int i=0;i<k-1;i++)
{
   s+=(a[i+1]-a[i]);
}
ll mini=s;
if(k%2!=0)
{
for(int i=0;i<k;i++)
{   ll k1=s;
    if(i==0)
    {
         k1-=(a[i+1]-a[i]);
    }
    else if(i==k-1)
    {
      k1-=(a[i]-a[i-1]); 
    }
    else{
         k1-=(a[i+1]-a[i]);
         k1-=(a[i]-a[i-1]); 
    }
   // cout<<k1<<" "<<i<<endl;
    mini=min(mini,k1);
}
cout<<mini<<endl;
}
else{
    ll ans=0;
    for(int i=0;i<k;i+=2)
     {
        ans+=(a[i+1]-a[i]);
     }
     cout<<ans<<endl;
}

    return 0;
}