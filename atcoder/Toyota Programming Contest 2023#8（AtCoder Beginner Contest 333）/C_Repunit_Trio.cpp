#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(vector<ll>&a,vector<ll>&ans,int pos,ll s,ll k)
{
    if(k>3)
    {
        return ;
    }
    if(pos==a.size())
    {
        if(k==3)
        {
        ans.push_back(s);
        }
        return ;
    }
    solve(a,ans,pos,s+a[pos],k+1);
    solve(a,ans,pos+1,s,k);
    return ;

}
int main (){
ll n;
cin>>n;
ll k=n/3;
ll k1=n%3;
ll s=0;
vector<ll>a;
for(int i=0;i<16;i++)
{
   s*=(ll)10;
   s+=(ll)1;
   a.push_back(s);
}
vector<ll>ans;
solve(a,ans,0,0,0);
sort(ans.begin(),ans.end());
cout<<ans[n-1]<<endl;
// for(int i=0;i<n;i++)
// {
//     cout<<ans[i]<<" ";
// }
// cout<<endl;


    return 0;
}