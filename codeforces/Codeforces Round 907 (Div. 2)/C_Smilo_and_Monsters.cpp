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
    ll s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    ll k=s/(ll)2;
    if(s%2!=0)
    {
        k++;
    }
    sort(a.begin(),a.end());
    ll s1=0,ind=n;
    for(int i=0;i<n;i++)
    {
        s1+=a[i];
       if(s1>k)
       {
         ind=i;
         break;
       }
    }
    ll ans=k+(n-ind);
    cout<<ans<<endl;
}
    return 0;
}