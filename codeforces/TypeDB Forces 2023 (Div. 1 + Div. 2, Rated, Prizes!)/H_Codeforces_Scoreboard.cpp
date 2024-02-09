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
        vector<ll>maxi(n+1,INT_MIN);
        vector<vector<ll>>arr(n,vector<ll>(3));
        vector<bool>vis(n,false);
        for(ll i=0;i<n;i++)
        {
           cin>>arr[i][0];
           cin>>arr[i][1];
           cin>>arr[i][2];
        }
        for(ll i=1;i<=n;i++)
        { 
            ll flag;
           for(ll j=0;j<n;j++)
           {
            if(!vis[j])
            {
            ll k=max((arr[j][1]-(arr[j][0]*i)),arr[j][2]);
            if(maxi[i]<k)
            {
                maxi[i]=k;
                flag=j;
            }
            cout<<k<<" "<<maxi[i]<<" "<<j<<" "<<i<<endl;
            }
           }
           vis[flag]=true;
        }
        ll sum=0;
        for(int i=1;i<=n;i++)
        {
            sum+=maxi[i];
        }
        cout<<sum<<endl;
     

        
    }
    return 0;
    }