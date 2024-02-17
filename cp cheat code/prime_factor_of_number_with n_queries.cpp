#include <bits/stdc++.h>
using namespace std;
using ll=long long;
 vector<int>p(1000001);
 void lar_prm(int n)
 {
    for(int i=2;i<=n;i++)
    {
        if(p[i]==0)
        {
        for(int j=i;j<=n;j+=i)
        {
            p[j]=i;
        }
        }
    }
 }
int main (){
int t;
cin>>t;
lar_prm(1000000);
while(t--)
{
    vector<pair<int,int>>ans;
    int n;
    cin>>n;
    while(n>1)
    {
        int k=p[n];
        cout<<k<<endl;
        int c=0;
        while(n%k==0)
        {
            c++;
            n=n/k;
        }
        ans.push_back({k,c});
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
}
    return 0;
}