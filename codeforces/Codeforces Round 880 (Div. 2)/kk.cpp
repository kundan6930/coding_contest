#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll solve(string str) {
    ll count = 0;
    unordered_map<ll, ll> fr;
    fr[0] = 1;
    ll pre = 0;
    for (ll i = 0; i < str.size(); i++) {
        pre ^= (1 << (str[i] - 'a'));
        count += fr[pre ];
        for (ll j = 0; j < 26; j++) {
            count += fr[pre ^ (1 << j)];
        }
        fr[pre]++;
    }
    return count;
}
int main (){
ll t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    cout<<solve(s)<<endl;
}
    return 0;
}