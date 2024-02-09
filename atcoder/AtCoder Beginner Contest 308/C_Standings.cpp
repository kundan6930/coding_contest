#include <bits/stdc++.h>
using namespace std;
using ll=long long;
bool sortbyCond(const pair<ll, ll>& a,
                const pair<ll, ll>& b)
{
    if (a.first != b.first)
        return (a.first < b.first);
    else
       return (a.second > b.second);
}
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll solve(vector<ll>arr, ll n)
{
    
    ll ans = arr[0];
    for (ll i = 1; i < n; i++)
    {
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));
    }
 
    return ans;
}
int main (){
ll n;
cin>>n;
vector<vector<ll>>a(n,vector<ll>(2));
vector<pair<ll,ll>>b;
vector<ll>ab;
for(ll i=0;i<n;i++)
{
    cin>>a[i][0]>>a[i][1];
    ab.push_back(a[i][0]+a[i][1]);
}
ll p=solve(ab,n);
for(ll i=0;i<n;i++)
{
    ll k=(a[i][0]*p)/ab[i];
    b.push_back({k,i+1});
}
sort(b.begin(),b.end(),sortbyCond);
reverse(b.begin(),b.end());
ll i;
// for( i=0;i<n-1;i++)
// {
//     vector<pair<double,ll>>c;
//     while(i<n-1 && b[i].first==b[i+1].first)
//     {
//        c.push_back({b[i].first,b[i].second});
//        i++;
//     }
//   //  cout<<i<<endl;
//     c.push_back({b[i].first,b[i].second});
//     reverse(c.begin(),c.end());
//     for(ll j=0;j<c.size();j++)
//   {
//     cout<<c[j].second<<" ";
//   }
//    // cout<<b[i].first<<" ";
// }
// if(i==n-1)
// {
//   cout<<b[i].second<<" ";
// }
// cout<<endl;
for( i=0;i<n;i++)
  {
    cout<<b[i].second<<" ";
  }
  cout<<endl;
    return 0;
}