#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,m;
bool solve(vector<ll>a,vector<ll>b,ll mid) 
{
   
    ll c=0,c1=0;
    for(ll i=0;i<n;i++)
    {
        if(a[i]<=mid) 
        {
            c++;
        }
    }
    for(ll i=0;i<m;i++)
    {
        if(b[i]>=mid) 
        {
            c1++;
        }
    }
    if(c>=c1)
    {
        return true;
    }
    return false;
}
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin>>n>>m;
vector<ll>a(n),b(m);
for(ll i=0;i<n;i++)
{
    cin>>a[i];
}
for(ll i=0;i<m;i++)
{
    cin>>b[i];
}
ll s=0,e=1e15,ans;
 while(s<=e)
 {
    ll mid=(s+e)/2;
   // cout<<s<<" "<<e<<" "<<mid<<" "<<solve(a,b,mid)<<endl;;
    if(solve(a,b,mid))
    {
       
        e=mid-1;
        ans=mid;
    }
    else{
         
        s=mid+1;
    }
 }
 cout<<ans<<endl;
    return 0;
}