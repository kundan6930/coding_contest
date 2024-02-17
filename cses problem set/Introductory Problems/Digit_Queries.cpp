#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    ll k;
    cin>>k;
    ll p=k;
    ll i=0;
    ll s=0;
    while(p>0)
    {
      ll temp =(ll)9*(ll)pow(10,i);
      if(p-(i+1)*temp>0)
      {
         i++;
         s+=temp;
         p-=i*temp;
      }
      else{
        ll a1=p%(i+1);
        ll a2=p/(i+1);
         if(a1!=0)
         {
            s+=a2+1;
            ll ans;
            ll j=(i+1)-a1;
            while(j>=0)
           {
               ans=s%10;
               s=s/10;
               j--;
           }
           cout<<ans<<endl;
           break;
         }
         else{
            s+=a2;
            cout<<s%10<<endl;
            break;
         }
         
      }
    }

}
    return 0;
}