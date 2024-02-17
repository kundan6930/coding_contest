#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
ll n,x;
cin>>n>>x;
vector<ll>a(n),b(n);
ll ans=0,sum=0;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    b[i]=(a[i]^x);
  //   cout<<b[i]<<" ";
   sum+=a[i];
}
cout<<endl;
ll s=0,st=0,en=-1,maxi=0,st1=0;
for(ll i=0;i<n;i++)
{
    s+=b[i]-a[i];
    if(s>maxi)
    {
       st1=st;
        en=i;
        maxi=s;
    }
    if(s<0)
    {
       st=i+1;
       s=0;
    }
}
//cout<<st1<<" "<<en<<" "<<maxi<<endl;
if(en==-1)
{
    cout<<sum<<endl;
}
else
{
for(int i=0;i<st1;i++)
{
   ans+=a[i];  
}
for(int i=en+1;i<n;i++)
{
   ans+=a[i];  
}
//cout<<ans<<endl;
for(int i=st1;i<=en;i++)
{
   ans+=b[i];  
}
//ans+=maxi;
cout<<ans<<endl;
}
}
    return 0;
}