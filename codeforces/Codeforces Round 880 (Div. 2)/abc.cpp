#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll solve(vector<ll>& arr) {
    sort(arr.begin(), arr.end(), greater<ll>());
    ll cost = 0;
    while (arr.size() > 0) {
        if (arr.size() < 3) {
            cost += max(arr[0],arr[1]);
            arr.clear();
        } else {
            cost += max(arr[0], arr[1]);
            arr.erase(arr.begin(), arr.begin() + 2);
        }
    }
    return cost;
}
int main (){
ll t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<solve(a)<<endl;
}
    return 0;
}