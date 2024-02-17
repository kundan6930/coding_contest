#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int solve(int n)
{
   int maxi=INT_MIN,mini=INT_MAX;
    while(n)
    {
      maxi=max(maxi,n%10);
      mini=min(mini,n%10);
      n=n/10;
    }
    return maxi-mini;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
      int l,r;
      cin>>l>>r;
      int maxi=-1,ans=0;
      for(int i=max(l,r-100);i<=r;i++)
      {
        int k=solve(i);
        if(k>maxi)
        {
            maxi=k;
            ans=i;
        }
      }
 cout<<ans<<endl;
        
    }
    return 0;
    }