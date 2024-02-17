#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll mod=998244353; 
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
      ll l,r;
      cin>>l;
      cin>>r;
      ll k=__lg(r / l);
      //ll max_l=floor((double)r/(double)pow(2,k));
     // int i=l;
      ll ans=((r/pow(2,k))-l+1)+ max((ll)0,(ll)((r/(3*pow(2,k-1)))-l+1)*k);
      /*while(i<=max_l)
      {
         ll m=i*3*pow(2,k-1);
         ans+=1;
         ans=ans%mod;
        if(m<=r)
        {
            ans+=(k)%mod;
            ans=ans%mod;
        }
        i++;
      }*/
      cout<<k+1<<" "<<ans<<endl;    
    }
    return 0;
    }