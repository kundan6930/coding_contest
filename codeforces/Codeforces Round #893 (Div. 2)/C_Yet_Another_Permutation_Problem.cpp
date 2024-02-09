#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int i=1;
vector<int>vis(n+1);
vector<int>ans;
ans.push_back(1);
vis[i]=1;
for(int i=1;i<=n;i++)
{
    if(!vis[i])
    {
       for(int j=i;j<=n;j*=2)
       {
          ans.push_back(j);
          vis[j]=1;
       }
    }
}
    // for(int i=1;i<=n;i++)
    // {
    //     if(i==2)
    //     {
    //         continue;
    //     }
    //     if(!vis[i])
    //     {
    //         ans.push_back(i);
    //     }
    // }
    for(int i=0;i<ans.size();i++)
    {
       cout<<ans[i]<<" ";
    }
    cout<<endl;
}
    return 0;
}