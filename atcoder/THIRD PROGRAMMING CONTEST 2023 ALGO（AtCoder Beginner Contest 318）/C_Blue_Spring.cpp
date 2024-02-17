#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,d,p;
cin>>n>>d>>p;
vector<ll>a(n);
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
sort(a.begin(),a.end(),greater<ll>());
ll ans=0;
int i;
for(i=0;i<n;)
{
    ll s=0;
    ll k=d;
    while(i<n &&  k>0)
    {
      s+=a[i];
      k--;
      i++;
    }
    if(s>p)
    {
        ans+=p;
    }
    else
    {
         ans+=s;
        break;
    }
   // cout<<ans<<" "<<i<<endl;
  //  i++;
}
for(;i<n;i++)
{
    ans+=a[i];
}
cout<<ans<<endl;

    return 0;
}