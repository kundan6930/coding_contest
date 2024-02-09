#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
ll n;
cin>>n;
string s;
cin>>s;
ll ans=0;
ll i=0;
vector<ll>a;
for(ll i=0;i<n;i++)
{
    if(s[i]=='1')
    {
      a.push_back(i)  ;
    }
}
ll n1=a.size();
ll k=(a[0]+a[n1-1])/2;
//cout<<k<<endl;
ll c1=0,c2=0;
for(ll i=0;i<n1;i++)
{
    if(k-a[i]>0)
    {
       c1++; 
       ans+=(k-a[i]-c1);
    }
    else if(k-a[i]<0)
    {
        c2++;
        ans+=(a[i]-k-c2);
    }
    
}
//cout<<c1<<" "<<c2<<endl;
if(s[k]=='0')
{
    ans+=min(c1,c2);
}
cout<<ans<<endl;
    return 0;
}
