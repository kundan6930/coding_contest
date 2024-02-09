#include <bits/stdc++.h>
using namespace std;
using ll=long long;
bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.first==b.first)
    {
        return (a.second<b.second);
    }
     return (a.first>b.first);
}
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<pair<int,int>>ans;
for(int i=0;i<n;i++)
{
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<(int)s.length();i++)
    {
        if(s[i]=='o')
        {
            c++;
        }
    }
  //  cout<<c<<endl;
    ans.push_back({c,i});
}
sort(ans.begin(),ans.end(),cmp);
for(int i=0;i<(int)ans.size();i++)
{
    cout<<ans[i].second+1<<" ";
}
cout<<endl;
    return 0;
}