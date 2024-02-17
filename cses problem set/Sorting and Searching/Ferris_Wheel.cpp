#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
   ll n,x;
   cin>>n>>x;
   vector<ll>a(n);
   for(int i=0;i<n;i++)
   { 
    cin>>a[i];
   }
   sort(a.begin(),a.end());
   ll c=0;
   ll i=0,j=n-1;
  while(i<j) 
  {
     if(a[i]+a[j]<=x)
     {
        c++;
        i++;
        j--;
     }
     else
     {
        j--;
     }
    // cout<<c<<" "<<i<<endl;
   }
   ll ans=(n-2*c)+c;
   cout<<ans<<endl;
    return 0;
    }