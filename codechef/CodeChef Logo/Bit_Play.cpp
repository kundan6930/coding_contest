#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll mod=1e9+7;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ans=1;
    for(int i=2;i<n;i+=2)
    {
        int a=s[i-2]-'0';
        int b=s[i-1]-'0';
        int c=s[i]-'0';
        ll c1=0;
       // cout<<a<<b<<c<<endl;
        if((a&b)==c)
        {
           c1++;
          // cout<<c1<<" "<<(a&b)<<endl;
        }
        if((a^b)==c)
        {
           c1++;
          // cout<<c1<<" "<<(a^b)<<endl;
        }
        if((a|b)==c)
        {
           c1++;
         //  cout<<c1<<" "<<(a|b)<<endl;
        }
       ans*=c1;
       ans%=mod;
    }
    cout<<ans<<endl;


}
    return 0;
}