#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<ll>m(4*n+5,0);
        ll xo_r=0,ans=0;
        for(ll i=0;i<n;i++)
        {
            xo_r=xo_r^a[i];
            double k=sqrt(xo_r);
            if(ceil(k)==floor(k))
               {
                 ans++;
               }
             for(ll j=0;j*j<=2*n;j++)
            {
               
               ans+=m[(j*j)^xo_r];
            }
            m[xo_r]++;
           // cout<<ans<<" "<<m[xo_r]<<endl;
        }
        ans=((n*(n+1))/2)-ans;
        cout<<ans<<endl;
    }
    return 0;
}