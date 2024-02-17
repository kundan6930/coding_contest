#include <bits/stdc++.h>
using namespace std;
using ll=long long;

ll solve(ll m)
{
   ll sq= m*m;
   ll cu=cbrt(sq);
   while ((cu + 1) * (cu + 1) * (cu + 1) <= m * m) 
              {
                cu++;
            }
            while (cu * cu * cu > m * m)
             {
                cu--;
            }
   return m-cu;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
      ll x;
      cin>>x;
      ll s=1,ans;
      ll e=2*x;
      while(s<=e)
      {
        ll m=(s+e)/2;
        if(solve(m)>=x)
        {
            ans=m;
            e=m-1;
        }
        else
        {
          s=m+1;
        }
      }
      ll ans1=ans*ans;
      cout<< ans1<<endl;
 }
    return 0;
    }
    