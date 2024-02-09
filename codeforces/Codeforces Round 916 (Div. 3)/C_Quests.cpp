#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n),b(n),maxi(n),pre(n);
    int s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
        pre[i]=s;
    }
    int maxi1=0;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        maxi1=max(maxi1,b[i]);
        maxi[i]=maxi1;
    }
    int maxi2=a[0];
    for(int i=0;i<n && i<k;i++)
    {
      int ans=0;
      ans+=pre[i];
      ans+=(k-(i+1))*(maxi[i]);
      //cout<<ans<<endl;
      maxi2=max(maxi2,ans);
    }
    cout<<maxi2<<endl;
}
    return 0;
}