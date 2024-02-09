#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(vector<ll>&a,ll x)
{
    int n=a.size();
    for(int i=0;i<n;i++)
    {
         a[i]=(a[i]+x)/(ll)2;
    }
}
int main (){
int t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    vector<int>ans;
    ll c=0;
    while(a[0] != a[n-1])
    {
       ll x=0;
       for(int i=0;i<n;i++)
       {
         x+=a[i];
       }
       x=x/n;
       ans.push_back(x);
       solve(a,x);
       c++;
    }
    if(c>n || c==0)
    {
        cout<<c<<endl;
    }
    else
    {
       cout<<c<<endl;
       for(int i=0;i<(int)ans.size();i++)
       {
        cout<<ans[i]<<" ";
       }
       cout<<endl;
    }
     for(int i=0;i<n;i++)
       {
        cout<<a[i]<<" ";
       }
       cout<<endl;
}
    return 0;
}