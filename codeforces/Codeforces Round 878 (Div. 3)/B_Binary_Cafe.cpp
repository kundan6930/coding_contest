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
     ll p=log2(n);
      ll ans=pow(2,k);
    if(p<k)
    {
        cout<<n+1<<endl;
    }
    else{
        cout<<ans<<endl;
    }
 
    

}
    return 0;
}