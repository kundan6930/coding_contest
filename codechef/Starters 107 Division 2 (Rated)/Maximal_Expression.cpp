#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    ll n,k;
    cin>>n>>k;
    ll maxi=-1;
    ll ans=0;
    for(ll i=0;i<=n;i++)
    {
        if((n-2*i)%k==0)
        {
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;

}
    return 0;
}