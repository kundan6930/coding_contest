#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
ll a,m,l,r;
cin>>a>>m>>l>>r;
if(a>=l && a<=r)
{
  ll l1=abs(a-l);
  ll l2=abs(r-a);
  ll ans=(l1/m)+(l2/m);
  cout<<ans+1<<endl;
}
else{
    ll ans=0;
   if(a<l)
   {
     ll k=abs(l-a);
     ll d=k/m;
     ll curr=a+(d*m);
     if(curr==l)
     {
        ans++;
     }
    //  else{
    //  curr+=m;
    //  }
     ans+=abs(r-curr)/m;
   }
   else if(a>r)
   {
     ll k=abs(a-r);
     ll d=k/m;
     ll curr=a-(d*m);
     if(curr==r)
     {
        ans++;
     }
    //  else{
    //  curr-=m;
    //  }
     ans+=abs(curr-l)/m;
   }
   cout<<ans<<endl;
}
    return 0;
}