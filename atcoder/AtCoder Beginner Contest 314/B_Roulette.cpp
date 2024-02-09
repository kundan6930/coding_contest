#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<vector<int>>a(n);
for(int i=0;i<n;i++)
{
    int k;
    cin>>k;
    for(int j=0;j<k;j++)
    {
        int ab;
        cin>>ab;
        a[i].push_back(ab);
    }
}
int x;
cin>>x;
vector<pair<int,int>>ans;
int mini=INT_MAX;
for(int i=0;i<a.size();i++)
{
    for(int j=0;j<a[i].size();j++)
    {
        if(a[i][j]==x)
        {
            mini=min(mini,(int)a[i].size());
             ans.push_back({a[i].size(),i+1});
        }
    }
}
//sort(ans.begin(),ans.end());
vector<int>ans1;
for(int i=0;i<ans.size();i++)
{
    if(ans[i].first==mini)
    {
       ans1.push_back(ans[i].second);
    }
}
cout<<ans1.size()<<endl;
for(int i=0;i<ans1.size();i++)
{
    cout<<ans1[i]<<" ";
}
cout<<endl;

    return 0;
}