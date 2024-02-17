#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll solve(vector<ll>a,ll n,ll q,vector<ll>qr,vector<ll>&ans)
{
   vector<ll> pre(n), suf(n);
    pre[0] = a[0];
    suf[n - 1] = a[n - 1];
    for (ll i = 1; i < n; i++) {
        pre[i] = max(pre[i - 1], a[i]);
        suf[n - i - 1] = min(suf[n - i], a[n - i - 1]);
    }
    for (ll i = 0; i < q; i++) {
        ll count = 0;
        ll left = 0;
        ll right = n - 1;
        while (left <= right) {
            ll mid = (left + right) / 2;
            if (pre[mid] * suf[mid] == qr[i]) {
                count += n - mid;
                break;
            } else if (pre[mid] * suf[mid] > qr[i]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        cout<<count<<endl;
       ans[i]=count;
    } 
}
int main() {
    ll n,q;
    cin>>n>>q;
    vector<ll>a(n),qr(q);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<q;i++)
    {
        cin>>qr[i];
    }
    vector<ll>ans(q);
    solve(a,n,q,qr,ans);
    for(int i=0;i<q;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}