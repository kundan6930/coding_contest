#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
     ll n,q;
     cin>>n>>q;
     vector<ll>a(n);
     vector<ll>sum(n+1,0);
     ll sum1=0;
     for(int i=0;i<n;i++)
     {
        cin>>a[i];
        sum1+=a[i];
        sum[i+1]=sum[i]+a[i];
     }
     while(q--)
     {
        ll l,r,k;
        cin>>l>>r>>k;
        ll ss=sum1-(sum[r]-sum[l-1]);
        ss=ss+(r-l+1)*k;
        if(ss%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
           cout<<"NO"<<endl;
        }
     }


        
    }
    return 0;
    }