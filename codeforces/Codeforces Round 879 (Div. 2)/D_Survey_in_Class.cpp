#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n,m;
    cin>>n>>m;
    vector<pair<pair<int,int>,int>>a(n),b(n);
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        a[i]={{x,y},i};
        b[i]={{y,x},i};

    }
    sort(a.begin(),a.end());
    int maxi=0;
    vector<int>maxi1(n);
    for(int i=0;i<n-1;i++)
    {
      if((a[i].first).second >=(a[i+1].first).first)
      {
        maxi1[a[i].second]=2*((a[i+1].first).first-(a[i].first).first);
      }
      else{
        maxi1[a[i].second]=((a[i+1].first).first-(a[i].first).first)+1;
      }
    }
    sort(b.begin(),b.end());
    for(int i=0;i<n-1;i++)
    {
      if(a[i].second>=a[i+1].first)
      {
        maxi1[i]=2*(a[i+1].first-a[i].first);
      }
      else{
        maxi1[i]=(a[i+1].first-a[i].first)+1;
      }
    }


}
    return 0;
}