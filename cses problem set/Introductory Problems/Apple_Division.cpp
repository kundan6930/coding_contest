#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,s=0;
ll mini=LLONG_MAX;
void solve(ll a[],ll pos ,ll sum)
{
    if(pos==n)
    {
      
        mini=min(mini,abs(sum-(s-sum)));
      //    cout<<mini<<" "<<sum<<endl;
        return ;
    }
    solve(a,pos+1,sum);
    solve(a,pos+1,sum+a[pos]);
}
int main ()
{
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
       cin>>a[i]; 
       s+=a[i];
    }
    solve(a,0,0);
  cout<<mini<<endl;
    return 0;
}