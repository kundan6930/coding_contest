#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int n,m;
cin>>n>>m;
string s;
cin>>s;
int o=0,t=0;
int ans=0;
for(int i=0;i<n;i++)
{
    if(s[i]=='1')
    {
        o++;
    }
    else if(s[i]=='2')
    {
        t++;
    }
    else
    {
       int k=t;
       int k1=o-m;
       if(k1>0)
       {
         k+=k1;
       }
      ans=max(ans,k);
      o=0;
      t=0;
    }
}
       int k=t;
       int k1=o-m;
       if(k1>0)
       {
         k+=k1;
       }
      ans=max(ans,k);
      cout<<ans<<endl;
    return 0;
}