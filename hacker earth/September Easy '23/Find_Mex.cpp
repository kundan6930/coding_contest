#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<int>a(n);
int maxi=0;
for(int i=0;i<n;i++)
{
    cin>>a[i];
  maxi=max(maxi,a[i]);
}
vector<int>vis(maxi+1,0);
vector<int>ans;
int c=0;
for(int i=0;i<n;i++)
{
    vis[a[i]]++;
    while(vis[c])
    {
        c++;
    }
    ans.push_back(c);
}
for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<" ";
}
cout<<endl;
    return 0;
}