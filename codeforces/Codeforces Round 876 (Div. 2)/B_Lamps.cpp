#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    vector<vector<ll>>a(n,vector<ll>(2));
    vector<vector<ll>>adj(n+1);
    for(int i=0;i<n;i++)
    {
          cin>>a[i][0];
          cin>>a[i][1];
          adj[a[i][0]].push_back(a[i][1]);
    }
    ll s=0;
    for(int i=1;i<=n;i++)
    {
        vector<ll>temp;
        for(int j=0;j<adj[i].size();j++)
        {
            temp.push_back(adj[i][j]);
        }
        sort(temp.begin(),temp.end(),greater<ll>());
        ll k=0;
        while(k<i && k<temp.size())
        {
           s+=temp[k];
         //  cout<<s<<" "<<temp[k]<<endl;
           k++;
        }
    }
    cout<<s<<endl;
}
    return 0;
}