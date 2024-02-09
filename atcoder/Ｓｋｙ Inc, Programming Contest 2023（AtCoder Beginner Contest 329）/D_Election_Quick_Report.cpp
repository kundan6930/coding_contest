#include <bits/stdc++.h>
using namespace std;
using ll=long long;
struct cmp 
{
    bool operator()( pair<int, int>& a, pair<int, int>& b) 
     {
        if (a.first < b.first) 
        {
            return true;
        } 
        else if (a.first > b.first) 
        {
            return false;
        }
        return a.second > b.second;
    }
};
int main (){
int n,m;
cin>>n>>m;
vector<int>a(m);
for(int i=0;i<m;i++)
{
    cin>>a[i];
}
map<int,int>mp;
priority_queue<pair<int, int> ,vector<pair<int, int>>,cmp>pq;
for(int i=0;i<m;i++)
{
   mp[a[i]]++;
   //cout<<a[i]<<" "<<mp[a[i]]<<" *"<<endl;
   pq.push({mp[a[i]],a[i]});
   cout<<pq.top().second<<endl;
}
    return 0;
}