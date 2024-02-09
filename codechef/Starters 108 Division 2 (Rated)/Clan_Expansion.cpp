#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    map<int,vector<int>>mp;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]].push_back(i);
    }
    int mini=INT_MAX;
    int ans=-1;
    for(auto i:mp)
    {
        vector<int>b=i.second;
        int n1=b.size();
        int c1=0;
        c1=max(c1,b[0]);
        for(int i=1;i<n1;i++)
        {
          c1=max(c1,((b[i]-b[i-1])/2));
        }
         c1=max(c1,(n-1)-b[n1-1]);
       if(c1<mini)
       {
        mini=c1;
        ans=i.first;
       }
    }
    cout<<ans<<" ";
    cout<<mini<<endl;

}
    return 0;
}