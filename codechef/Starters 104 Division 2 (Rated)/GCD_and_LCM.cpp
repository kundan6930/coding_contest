#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
ll t;
cin>>t;
while(t--)
{
    ll x,y,k;
    cin>>x>>y>>k;
    ll k1=__gcd(x,y);
    if(k==1)
    {
       cout<<k1+min(x,y)<<endl;
    }
    else{
        cout<<2*k1<<endl;
    }
    
}
    return 0;
}