#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
        int n,m;
        cin>>n>>m;
        vector<vector<ll>>a(n,vector<ll>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
                
            }   
        }
     ll s=0;
        
         for(int j=0;j<m;j++)
        {
            vector<ll>kk;
            for(int i=0;i<n;i++)
            {
                kk.push_back(a[i][j]);
            }
            sort(kk.begin(),kk.end());
            for(int i=0;i<n;i++)
            {
                s+=(i-(n-i-1))*kk[i];
            }
        }
        
        cout<<s<<endl;


        
    }
    return 0;
    }