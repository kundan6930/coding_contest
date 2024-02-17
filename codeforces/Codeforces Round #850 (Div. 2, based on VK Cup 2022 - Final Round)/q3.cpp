#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
      long long  n;
      cin>>n;
      long long  a[n];
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }  
      sort(a,a+n);
      long long k=0,ans=0;
      for(int i=0;i<n;i++)
      {
          if( k!=a[i])
          {
            if(k+1==a[i])
            {
                k=k+1;
            }
            else
            {
                k++;
               ans+=a[i]-k;
               
               //cout<<ans<<" "<<i<<" "<<a[i]<<endl;
              // k=k+1;
            }
          }
      }
     cout<<ans<<endl;
    }
    return 0;
}