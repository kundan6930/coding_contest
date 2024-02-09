#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int n;
cin>>n;

for(int i=1;i<=n;i++)
{
    ll k=i*i;
  ll ans=(k*(k-1))/2;
    ans=ans-4*(i-2)*(i-1);
    cout<<ans<<endl;
}
    return 0;
}