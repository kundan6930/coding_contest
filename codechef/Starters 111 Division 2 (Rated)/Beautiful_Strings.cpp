#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll mod=1e9+7;
  
int main (){
ll t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<ll>fr(26);
    for(int i=0;i<n;i++)
    {
        fr[s[i]-'a']++;
    }  
    ll ans=1;
    for (int i = 0; i < 26; i++)
    {
           ans*=(fr[i]+1);
           ans%=mod;
    }
    ans=(ans-1+mod)%mod;
    cout<<ans<<endl;
    
}
    return 0;
}