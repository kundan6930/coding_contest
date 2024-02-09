#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int n,q;
cin>>n>>q;
string s;
cin>>s;
vector<int>pre(n+1);
for(int i=1;i<n;i++)
{
    if(s[i]==s[i-1])
    {
      pre[i+1]=pre[i]+1;
    }
    else{
        pre[i+1]=pre[i];
    }
   // cout<<pre[i+1]<<endl;
}
for(int i=0;i<q;i++)
{
    int l,r;
    cin>>l>>r;
    int ans=pre[r]-pre[l-1];
    if(s[l-1]==s[l-2])
    {
        ans--;
    }
    cout<<ans<<endl;
}
    return 0;
}