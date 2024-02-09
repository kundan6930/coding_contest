#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    ll n,k,q;
    cin>>n>>k>>q;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll c=0,ans=0;
    for(int i=0;i<n;i++)
    {
       if(a[i]<=q)
       {
         c++;
         if(c-k>=0)
         {
           ans+=(c-k+1);
         }
       }
       else
       {
         c=0;
       }
    }
    cout<<ans<<endl;
}
    return 0;
}