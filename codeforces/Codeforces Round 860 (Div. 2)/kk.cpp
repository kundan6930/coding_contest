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
       vector<int>vis(50000+5,0);
       vector<ll>a[n];
       for(int i=0;i<n;i++)
       {
         int x;
         cin>>x;
         for(int j=0;j<x;j++)
         {  int r;
            cin>>r;
            a[i].push_back(r);
         }
         
       }
       vector<ll>ans;
       for(int i=n-1;i>=0;i--)
       {
          int f=0;
          for(auto k:a[i])
          {
            if(!f && !vis[k])
            {
                f=1;
               ans.push_back(k);
               vis[k]=1;
            }
            else
            {
                vis[k]=1;
            }
          }
       }
      // cout<<ans.size()<<endl;
        if(ans.size()==n)
        {
            for(int i=n-1;i>=0;i--)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }

        
    }
    return 0;
    }