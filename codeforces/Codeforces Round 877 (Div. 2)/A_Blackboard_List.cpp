#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<ll>a(n);
    map<ll,ll>m;
    ll f=0,maxi1=0,mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
        maxi1=max(maxi1,a[i]);
        mini=min(mini,a[i]);
        if(a[i]<0)
        {
            f=1;
        }
    }
  ll maxi=0,ans1=maxi1,ans;
    for(int i=0;i<n;i++)
    {
        ll c=0;
        for(int j=0;j<n;j++)
        {
           if(i==j)
           {
            continue;
           }
           else
           {
                 if(m[abs(a[i]-a[j])]>=1)
                 {
                   c++;
                 }
           }
        }
        if(c>=maxi)
        {
            maxi=c;
            ans=a[i];
        }
    }
    if(f==1)
    {
        cout<<mini<<endl;
    }
    else{
    cout<<ans1<<endl;
    }
}
    return 0;
}