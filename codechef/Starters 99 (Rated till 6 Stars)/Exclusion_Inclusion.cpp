#include <bits/stdc++.h>
using namespace std;
using ll=long long;
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
    ll s=0;
    for(int i=0;i<n;i++)
    {
      s+=a[i];
    }
    vector<ll>ans;
    ll s1=0;
    for(int i=0;i<n;i++)
    {
       ans.push_back(s-s1) ;
       s1+=a[i];
    }
   for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
   
}
    return 0;
}