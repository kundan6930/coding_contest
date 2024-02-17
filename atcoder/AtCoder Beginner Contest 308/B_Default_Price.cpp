#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int n,m;
cin>>n>>m;
vector<string>a(n),b(m);
map<string,int>mp;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<m;i++)
{
    cin>>b[i];
}
vector<int>c(m+1);
for(int i=0;i<=m;i++)
{
    cin>>c[i];
}
for(int i=0;i<m;i++)
{
    mp[b[i]]=c[i+1];
}
int ans=0;
for(int i=0;i<n;i++)
{
   if(mp[a[i]]==0)
   {
    ans+=c[0];
   }
   else{
    ans+=mp[a[i]];
   }
}
cout<<ans<<endl;
    return 0;
}