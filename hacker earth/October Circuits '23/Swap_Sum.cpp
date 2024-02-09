#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    vector<pair<int,int>>c;
    for(int i=0;i<n;i++)
    {
        if(b[i]>a[i])
        {
             c.push_back({b[i],i});
        }
    }
    int n1=c.size();
    if(n1<=k)
    {
        int s=0;
       for(int i=0;i<n;i++)
       {
         s+=max(a[i],b[i]);
       }
       cout<<s<<endl;
    }
    else
    {
  priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq; 
    for(int i=0;i<k;i++)
    {
        pq.push(c[i]);
    }
    for(int i=k;i<n1;i++)
    {
       int k1=pq.top().first;
       int k2=c[i].first;
       if(k2>k1)
       {
        pq.pop();
        pq.push({k2,c[i].second});
       }   
    }
    int s=0;
    vector<int>pos(n);
    while(!pq.empty())
    {
      // cout<<pq.top().first<<" ";
       s+=pq.top().first;
       pos[pq.top().second]=1;
       pq.pop();
    }
   // cout<<endl;
  //  cout<<s<<endl;
    for(int i=0;i<n;i++)
    {
        if(pos[i]==0)
        {
          s+=a[i];
        }
    }
    cout<<s<<endl;
    }
    
}
    return 0;
}