#include <bits/stdc++.h>
using namespace std;
int n,q,m;
using ll=long long;
bool solve(int mid, vector<int>qr, vector<vector<int>>seg)
{
    vector<int>a(n+1,0);
    for(int i=0;i<mid;i++)
    {
       a[qr[i]]=1;
    }
    for(int i=1;i<=n;i++)
    {
      a[i]+=a[i-1];
    }
    for(int i=0;i<m;i++)
    {
        int gap=(seg[i][1]-seg[i][0])+1;
        int gap1=a[seg[i][1]]-a[seg[i][0]-1];
        if(gap1>(gap/2))
        {
            return true;
        }
    }
    return false;

}
int main (){
int t;
cin>>t;
while(t--)
{
    cin>>n>>m;
    vector<vector<int>>seg(m,vector<int>(2));
    for(int i=0;i<m;i++)
    {
        cin>>seg[i][0]>>seg[i][1];
    }
    cin>>q;
    vector<int>qr(q);
    for(int i=0;i<q;i++)
    {
        cin>>qr[i];
    }
    int s=1,e=q,ans=-1;
    while(s<=e)
    {
       int mid=(s+e)/2;
       if(solve(mid,qr,seg))
       {
         ans=mid;
         e=mid-1;
       }
       else{
          s=mid+1;
       }
    }
   cout<<ans<<endl;

}
    return 0;
}