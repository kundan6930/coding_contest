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
    vector<int>a(n),c(n+1,-1000),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        if(b[i]>0)
        {
         c[a[i]]=max(c[a[i]],b[i]);
        }
        
    }
    int ans=0;
    for(int i=0;i<=n;i++)
    {
          if(c[i]!=-1000)
          {
            ans+=c[i];
          }
    }
    cout<<ans<<endl;
   
}
    return 0;
}