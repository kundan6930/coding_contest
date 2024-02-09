#include <bits/stdc++.h>
using namespace std;
using ll=long long;
 ll n,m;
   bool solve( vector<ll>&a)
    {
       ll xor1=INT_MIN;
      for(ll i=0;i<n;i++)
      {
        ll k=a[i] & m;
         if(k==m)
         {
            if(xor1==INT_MIN)
            {
                xor1=a[i];
            }
            else{
                xor1=xor1&a[i];
            }
         }
      }
      if(xor1==m)
      {
        return true;
      }
      return false;
    }

int main (){
int t;
cin>>t;
while(t--)
{
 
  cin>>n>>m;
  vector<ll>a(n);
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  if(solve(a))
  {
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }

}
    return 0;
}