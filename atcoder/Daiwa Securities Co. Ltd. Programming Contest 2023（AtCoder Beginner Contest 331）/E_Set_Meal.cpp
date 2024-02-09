#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll solve(vector<ll>& A, vector<ll>& B, ll K,map<pair<ll,ll>,ll>&mp)
{
     ll N = A.size();
    ll m=B.size();
vector<pair<ll,ll>>a1(N),b1(m);
vector<ll>f1(N),f2(m);
for(int i=0;i<N;i++)
{
    a1[i]={A[i],i};
}
for(int i=0;i<m;i++)
{
    b1[i]={B[i],i};
}
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    sort(a1.begin(), a1.end());
    sort(b1.begin(), b1.end());
   for(int i=0;i<N;i++)
{
    f1[i]=a1[i].second;
}
for(int i=0;i<m;i++)
{
    f2[i]=b1[i].second;
}
    priority_queue<pair<ll, pair<ll, ll> > > pq;
    set<pair<ll, ll> > my_set;
    pq.push(make_pair(A[N - 1] + B[m - 1],make_pair(N - 1, m - 1)));
    my_set.insert(make_pair(N - 1, m - 1));
    for (ll count = 0; count < K; count++)
    {
        pair<ll, pair<ll, ll> > temp = pq.top();
        pq.pop();
       // cout << temp.first << endl;
        ll i = temp.second.first;
        ll j = temp.second.second;
        if(mp[{f1[i],f2[j]}]<=0)
        {
            return temp.first;
        }
        ll sum = A[i - 1] + B[j];
        pair<ll, ll> temp1 = make_pair(i - 1, j);
        if (my_set.find(temp1) == my_set.end()) 
        {
            pq.push(make_pair(sum, temp1));
            my_set.insert(temp1);
        }
        sum = A[i] + B[j - 1];
        temp1 = make_pair(i, j - 1);
        if (my_set.find(temp1) == my_set.end())
        {
            pq.push(make_pair(sum, temp1));
            my_set.insert(temp1);
        }
    }
    return -1;
}
 
int main (){
ll n,m,l;
cin>>n>>m>>l;
vector<ll>a(n),b(m);
ll s=0;
for(ll i=0;i<n;i++)
{
  cin>>a[i];
}
ll s1=0;
for(ll i=0;i<m;i++)
{
  cin>>b[i];
}
map<pair<ll,ll>,ll>mp;
for(ll i=0;i<l;i++)
{
    ll k1,k2;
    cin>>k1>>k2;
    mp[{k1-1,k2-1}]++;
}
cout<<solve(a,b,l+1,mp);


    return 0;
}