#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll mod=1e9+7;
ll solve(int n)
{
    ll p=(ll)1;
    for(int i=1;i<=n;i++)
    {
          p*=i;
          p%=mod;
    }
    return p;
}
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    ll o=0,e=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            e++;
        }
        else{
            o++;
        }
    }
    if(k==0)
    {
        if(o!=0 && e!=0)
        {
            cout<<"0"<<endl;
        }
        else if(o==0 || e==0)
        {
              cout<<solve(n)<<endl;
        }
    }
    else
    {
        ll e1=n/2;
        ll o1=e1;
        if(n%2!=0)
        {
           o1++;
        }
        if((e1==e && o1==o) || (e1==o && o1==e))
        {
             ll p1=solve(e);
             ll p2=solve(o);
            ll ans=((p1%mod )*(p2%mod))%mod;
           if(n%2==0)
           {
             ans=(ans*(ll)2)%mod;
             cout<<ans<<endl;
           }
           else
           {
              cout<<ans<<endl;
           }
           
          
        }
        else
        {
            cout<<"0"<<endl;
        }

    }
}
    return 0;
}