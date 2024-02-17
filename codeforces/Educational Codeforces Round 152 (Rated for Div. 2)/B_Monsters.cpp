#include <bits/stdc++.h>
using namespace std;
using ll=long long;

    bool comp(const pair<int, int>& a,
                const pair<int, int>& b)
{
    if (a.first != b.first)
        return (a.first > b.first);
    else
       return (a.second < b.second);
}

int main (){
int t;
cin>>t;
while(t--)
{
  int n,k;
  cin>>n>>k;
  vector<int>a(n),rem;
  vector<int>ans;
  vector<pair<int,int>> pq;
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
      if((a[i]%k)==0)
      {
        ans.push_back(i+1);
      }  
      pq.push_back({(a[i]%k),i+1});
  }
//    while(!pq.empty())
//    {
//     cout<<pq.top().first<<" "<<pq.top().second<<endl;
//     pq.pop();
//    }
sort(pq.begin(),pq.end(),comp);

 for(int i=0;i<pq.size();i++)
 {
  //  cout<<pq[i].first<<" "<<pq[i].second<<endl;
    if(pq[i].first!=0)
    {
      ans.push_back(pq[i].second);
    }
 }
 //sort(ans.begin(),ans.end());
//  for(int i=0;i<rem.size();i++)
//  {
//     ans.push_back(rem[i]);
//  }
 //reverse(ans.begin(),ans.end());
 for(int i=0;i<ans.size();i++)
 {
    cout<<ans[i]<<" ";
 }
 cout<<endl;
 }


    return 0;
}