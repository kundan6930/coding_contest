#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll n;
ll solve(vector<ll>a,ll m)
{
   ll i=0,j=0,c=0;
   while(i<n)
   {
     ll p=a[i]-a[j];
      if(p>2*m)
      {
        j=i;
        c++;
      }
      i++;
   }
   return c;
}
int main (){
int t;
cin>>t;
while(t--)
{
   
    cin>>n;
    vector<ll>a(n);
    ll s1=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s1+=a[i];
    }
    sort(a.begin(),a.end());
    ll s=0,e=s1,ans;
    while(s<=e)
    {
       ll m=(s+e)/2;
       if(solve(a,m)>=3)
       {
         s=m+1;
       }
       else{
        ans=m;
        e=m-1;
       }
    }
    cout<<ans<<endl;
}
    return 0;
}