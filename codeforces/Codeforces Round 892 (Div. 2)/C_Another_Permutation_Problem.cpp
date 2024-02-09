#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    ll sum, maxi,ans=0;
    for(int i=0;i<n;i++)
    {
       sum=0,maxi=0;
       int j=i-1;
       while(j>=1)
       {
        ll k1=j*j;
         sum+=k1; 
         maxi=max(maxi,k1);
         j--;
       }
       ll c=n;
        j=i;
       while(j<=n)
       {
         ll k2=j*c;
         sum+=k2;
         maxi=max(maxi,j*c);
         c--;
         j++;
       }
       sum-=maxi;
       ans=max(ans,sum);
      // cout<<maxi<<" "<<ans<<" "<<i<<endl;
    }
    cout<<ans<<endl;
}
    return 0;
}