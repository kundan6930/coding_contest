#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,maxi;
void solve(ll pos,vector<ll>&a,ll s,ll s1)
{
    if(pos==n)
    {
       //  cout<<pos<<" "<<s<<endl;
        maxi=min(maxi,abs((s*s)-(s1*s1)));
        return ;
    }
    solve(pos+1,a,s+a[pos],s1);
    solve(pos+1,a,s,s1+a[pos]);
   // cout<<l<<" "<<r<<" "<<pos<<endl;
    return;
}
int main (){
ll t;
cin>>t;
while(t--)
{    
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    maxi=LLONG_MAX;
    solve(0,a,0,0);
    cout<<maxi<<endl;
}
    return 0;
}