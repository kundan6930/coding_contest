#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
        ll n,c;
        cin>>n>>c;
        vector<ll>a(n);
        ll k;
        for(int i=0;i<n;i++)
        {
          cin>>k;
          a[i]=k+i+1;
        }
        sort(a.begin(),a.end());
        ll ans=0;
        int i=0;
        while( i<n && a[i]<=c)
        {
           c-=a[i];
           ans++;
           i++;
        }
        cout<<ans<<endl;
    }
    return 0;
}