#include <bits/stdc++.h>
using namespace std;
using ll=long long;

ll solve(vector<ll>a,ll m,ll n,ll c)
{
    for(int i=0;i<n;i++)
    {
        ll k=(a[i]+m);
        c-=(k*k);
        if(c<0)
        {
            return (ll)-1;
        }
    }
    if(c==0)
    {
        return 0;
    }
    else{
        return 1;
    }
}
int main (){
int t;
cin>>t;
while(t--)
{
   ll n,c; 
    cin>>n>>c;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll s=0;
    ll e=c/n;
    e=sqrt(e);
    ll ans=0;
    while(s<e)
    {
        ll m=(s+e)/2;
       // cout<<s<<" "<<e<<" "<<m<<endl;
        if(solve(a,m,n,c)==0)
        {
            ans=m;
            break;
        }
        else if(solve(a,m,n,c)==-1)
        {
            e=m;
        }
        else{
            s=m+1;
        }
      //  cout<<solve(a,m,n,c)<<" "<<ans<<endl;
    }
    ans=ans/2;
    cout<<ans<<endl;

}
    return 0;
}