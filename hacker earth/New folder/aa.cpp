#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll solve(vector<int>a,vector<vector<int>>qr)
{
    int n=a.size();
    vector<int>ans;
    vector<vector<ll>>pre(32,vector<ll>(n+1));
    for(int i=0;i<32;i++)
    {
        for(int j=0;j<n;j++)
        {
            int k=(a[j]>>i)&1;
            pre[i][j+1]=pre[i][j]+k;
        }
    }
    int q=qr.size();
    for(int i=0;i<q;i++)
    {
        int idx=qr[i][0];
        int val=qr[i][1];
        int maxi=-1,f=0;
        for(int j=0;j<32;j++)
        {
            int k=(val>>j)&1;
            int req=pre[idx-1][j]+k;
          
            if(k!=0)
            {
              auto it=lower_bound(pre[j].begin()+idx,pre[j].end(),req);
              if(it==pre[j].end())
              {
                f=1;
                break;
              }
              else{
                 int k2=it-pre[j].begin();
                 maxi=max(maxi,k2);
              }
            }
        }
        if(f==1)
        {
            ans.push_back(-1);
        }
       else{
         ans.push_back(maxi);
       }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main (){
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int q;
    cin>>q;
   vector<vector<int>>qr(q,vector<int>(2));
    for(int i=0;i<q;i++)
    {
        cin>>qr[i][0];
        cin>>qr[i][1];
    }
    solve(a,qr);
}
    return 0;
}