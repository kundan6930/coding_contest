#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll pow1(ll a,ll b)
{
    ll k=(ll)1;
    for(ll i=(ll)0;i<b;i++)
    {
       k*=a;
    }
    return k;
}
int main (){


   ll n;
   cin>>n;
   int f=-1;
   for(int i=1;i<16;i++)
   {
      if(n==pow1(i,i))
      {
          f=i;
          break;
      }
   }
   
    cout<<f<<endl;
   
   
}