#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
        ll a,b,c;
        cin>>a>>b>>c;
      ll s=0,e=(ll(1)<<31)-1,ans=-1;
      while(s<=e)
      {
        int m=(s+e)/2;
        if((a^m)<(b^m) && (b^m)<(c^m))
        {
            ans=m;
            break;
        }
        else if((a^m)<(b^m))
        {
            e=m-1;
        }
        else
        {
            s=m+1;
        }
      }
     cout<<ans<<endl;

        
    }
    return 0;
    }