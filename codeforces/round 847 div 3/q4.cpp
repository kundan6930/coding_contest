#include <bits/stdc++.h>
using namespace std;
 typedef pair<int, int> pi;
int main (){
    int t;
    cin>>t;
    while(t--)
    { 
     priority_queue<pi, vector<pi>, greater<pi> > pq,mq;
     int n;
     cin>>n;
     int k;
     map<int,int>m;
     for(int i=0;i<n;i++)
     {
        cin>>k;
        m[k]++;
     }
     for(auto i:m)
     {
       pq.push({i.first,i.second});
     }
     int count=0;
     //cout<<m.size();
     while(m.size()!=0)
     {
        priority_queue<pi, vector<pi>, greater<pi> > mq;
     int prev=pq.top().first-1;
     while(!pq.empty())
     {
        pair<int,int>p=pq.top();
        pq.pop();
        //int k=p.second;
        if(prev+1!=p.first)
        {
            count++;
        }
        prev=p.first;
        m[p.first]--;
        if(p.second-1>0)
        {
            mq.push({prev,p.second-1});
        }
        else
        {
          m.erase(p.first);
        }
     }
     count++;
     //cout<<count<<endl;
     pq=mq;
     }
     cout<<count<<endl;
    }
    return 0;
}