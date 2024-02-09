#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>>a(n,vector<ll>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    vector<vector<ll>>row(n,vector<ll>(30,-1));
    vector<ll>itotal1(30);
    
    for(int k=0;k<30;k++)
    {  
        ll total1=0;
    for(int i=0;i<n;i++)
    {
         ll c=0;
        for(int j=0;j<m;j++)
        {
           ll ibit=(a[i][j]>>k)&1;
           if(ibit==1)
           {
             c++;
             total1++;
           }
        }
        row[i][k]=c;
      }
      itotal1[k]=total1;
    }
    //  for(int i=0;i<n;i++)
    // {
    // for(int k=0;k<30;k++)
    // {  
   
    //     cout<<row[i][k]<<" ";
    // }
    // cout<<endl;
    // }
    vector<vector<ll>>col(m,vector<ll>(30,-1));
    
    for(int k=0;k<30;k++)
    {   
    for(int i=0;i<m;i++)
    {
         ll c=0;
        for(int j=0;j<n;j++)
        {
           ll ibit=(a[j][i]>>k)&1;
           if(ibit==1)
           {
             c++;
           }
        }
        col[i][k]=c;
      }
    }
    //  for(int i=0;i<m;i++)
    // {
    // for(int k=0;k<30;k++)
    // {  
   
    //     cout<<col[i][k]<<" ";
    // }
    // cout<<endl;
    // }
    
    ll maxi=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            ll sum=0;
           for(int k=0;k<30;k++)  
         {
               ll ktotal1=itotal1[k];
               ll ktotal0=(n*m)-itotal1[k];
              ll ibit=(a[i][j]>>k)&1;
              ll irow1=row[i][k];
              ll icol1=col[j][k];
              ll irow0=m-row[i][k];
              ll icol0=n-col[j][k];
              if(ibit==1)
              {
                 ll itot0=irow0+icol0;
                 ll irem0=ktotal0-(itot0);
                 sum+=(irem0*(1<<k));
              }
              else{
                 ll itot1=irow1+icol1;
                 ll irem1=ktotal1-(itot1);
                 sum+=(irem1*(1<<k));
              }
        }
        maxi=max(maxi,sum);
        }
    }
    cout<<maxi<<endl;
}
    return 0;
}