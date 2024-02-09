#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
      ll n,x,p;
      cin>>n>>x>>p;
      ll f=0;
      for(ll i=1;i<=min(2*n,p);i++)
      {
        ll s=(i*(i+1))/2;
         ll k=((s%n)+x)%n;
         if(k==0)
         {
            f=1;
            break;
         }
      }
      if(f==1)
      {
        cout<<"Yes"<<endl;
      }
      else{
        cout<<"No"<<endl;
      }
    }
    return 0;
}