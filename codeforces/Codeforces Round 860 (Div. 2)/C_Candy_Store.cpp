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
     vector<vector<ll>>a(n,vector<ll>(2));
      vector<ll>ans(n);
     for(int i=0;i<n;i++)
     {
        cin>>a[i][0];
        cin>>a[i][1];
        ans[i]=a[i][0]*a[i][1];
     }
     sort(ans.begin(),ans.end());
      vector<ll>vis(n,0);
     for(int i=0;i<n;i++)
     {
         
     }
    

        
    }
    return 0;
    }