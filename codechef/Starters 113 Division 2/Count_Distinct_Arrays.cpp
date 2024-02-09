#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll mod=998244353;
long long solve3(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
void solve(vector<ll>&arr, int n,vector<int>&ngr)
{
    stack<int> s;
    s.push(0);
    for (int i = 1; i < n; i++) {
 
        if (s.empty()) {
            s.push(i);
            continue;
        }
        while (s.empty() == false && arr[s.top()] < arr[i]) {
            ngr[s.top()]=i;
            s.pop();
        }
        s.push(i);
    }
    while (s.empty() == false) {
        ngr[s.top()]=-1;
        s.pop();
    }
}
void solve1(vector<ll>&arr, int n,vector<int>&ngr)
{
    stack<int> s;
    s.push(n-1);
    for (int i = n-2; i>=0; i--) {
 
        if (s.empty()) {
            s.push(i);
            continue;
        }
        while (s.empty() == false && arr[s.top()] < arr[i]) {
            ngr[s.top()]=i;
            s.pop();
        }
        s.push(i);
    }
    while (s.empty() == false) {
        ngr[s.top()]=-1;
        s.pop();
    }
}
int main (){
int t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int>ngr(n),ngl(n);
    solve(a,n,ngr);
    solve1(a,n,ngl);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<i<<" "<<ngr[i]<<endl;
    // }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<i<<" "<<ngl[i]<<endl;
    // }
    vector<int>pre(n);
    for(int i=0;i<n;i++)
    {
        if(ngr[i]!=-1 && ngl[i]!=-1)
        {
            pre[ngr[i]]+=1;
        }
    }
    for(int i=1;i<n;i++)
    {
        pre[i]=pre[i-1]+pre[i];
    }
    // vector<ll>ans(n);
    for(int i=0;i<n;i++)
    {
        //cout<<pre[i]<<" ";
        ll ans=solve3((ll)2,pre[i],mod);
        cout<<ans<<" ";
    }
    cout<<endl;
}
    return 0;
}