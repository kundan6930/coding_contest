#include <bits/stdc++.h>
using namespace std;
using ll=long long;
bool solve(vector<ll>a,vector<ll>b,vector<ll>c,ll mid)
{
    
}
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,m;
cin>>n>>m;
vector<ll>a,b,c;
for(ll i=0;i<n;i++)
{
    ll k1,k2;
    cin>>k1>>k2;
    
    if(k1==0)
    {
        a.push_back(k2);
    }
    else if(k1==1)
    {
        b.push_back(k2);
    }
    else 
    {
        c.push_back(k2);
    }
}
ll s=0,e= 1e15,ans;
while(s<=e)
 {
    ll mid=(s+e)/2;
   // cout<<s<<" "<<e<<" "<<mid<<" "<<solve(a,b,mid)<<endl;;
    if(solve(a,b,c,mid))
    {
        s=mid+1;
        ans=mid;
    }
    else
    {
        e=mid-1;
    }
 }
 cout<<ans<<endl;
    return 0;
}