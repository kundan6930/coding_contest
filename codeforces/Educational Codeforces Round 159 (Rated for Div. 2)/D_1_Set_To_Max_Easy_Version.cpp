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
    vector<ll>a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    map<int,vector<int>>mp;
    for(int i=0;i<n;i++)
    {
        mp[b[i]].push_back(i);
    }
   vector<vector<ll>>suf(n+1,vector<ll>(n+1));
        int f=0;
    for(int i=0;i<n;i++)
    {
       ll maxi=0;
       for(int j=i;j<n;j++)
       {
         maxi=max(maxi,a[j]);
         suf[i][j]=maxi;
       }
    }
    for(auto i:mp)
    {
        vector<int>aa=i.second;
        int n1=aa.size();
        int r=aa[n1-1];
        int l=aa[0];
        if(suf[l][r]!=i.first)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
    return 0;
}