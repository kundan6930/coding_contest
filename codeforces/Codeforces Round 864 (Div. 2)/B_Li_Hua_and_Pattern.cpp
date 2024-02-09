#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
       int n,k;
       cin>>n>>k;
      int a[n][n];
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
      }
      int c=0;
      for(int i=0;i<n/2;i++)
      {
        for(int j=0;j<n;j++)
        {
            //cout<<i<<" "<<j<<" "<<n/2<<c<<endl; 
            if(a[i][j]==a[n-i-1][n-j-1])
           {
              continue;
           }
           else{
            c++;
           }
        }
      }
      if(n%2!=0)
      {
      for(int i=0;i<n/2;i++)
      {
        if(a[n/2][i]==a[n/2][n-i-1])
        {
            continue;
        }
        else{
            c++;
        }
      //  cout<<i<<c<<endl;
      }
      }
      //cout<<c<<endl;
      int l=k-c;
     if(k<c )
     {
        cout<<"NO"<<endl;
     }
     else if(k>=c && n%2!=0)
     {
        cout<<"YES"<<endl;
     }
     else if(k>=c && l%2==0)
     {
        cout<<"YES"<<endl;
     }
     else{
         cout<<"NO"<<endl;
     }

        
    }
    return 0;
    }