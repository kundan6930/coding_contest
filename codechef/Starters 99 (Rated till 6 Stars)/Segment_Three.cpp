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
    ll s=0;
    vector<ll>ans;
    for(int i=0;i<n-2;i++)
    {
         s=(a[i]+a[i+1]+a[i+2])%3;
         ans.push_back(s);
    }
     for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    int ans1=0;
    for(int i=3;i<n;i++)
    {   
         if((a[i]%3)==(a[i-3]%3))
         {
             continue;
         }
         else if((a[i]%3)<(a[i-3]%3))
         {
            ans1+=((a[i-3]%3)-(a[i]%3));
         }
         else
         {
           ans1+=((a[i-3]%3)+(3-(a[i]%3)));
         }
         cout<<ans1<<" "<<i<<endl;
         a[i]=a[i-3];
    }
    cout<<ans1<<endl;
}
    return 0;
}