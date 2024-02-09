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
        vector<vector<ll>>res(2,vector<ll>(n));
        res[0][0]=2*n;
        res[1][n-1]=2*n-1;
        ll s=1;
        ll e=2*n-2;
        for(int i=0;i<n-1;i++)
        {
            if(i&1)
            {
                 res[0][i+1]=e;
                res[1][i]=e-1;
                e-=2;
            }
            else{
                res[0][i+1]=s+1;
                res[1][i]=s;
                s+=2;
            }
        }
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }




        
    }
    return 0;
    }