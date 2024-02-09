#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
       ll n;
       cin>>n;
       ll mini=LLONG_MAX,sum=0,neg=0;
       for(int i=0;i<n;i++)
       {
          ll k;
          cin>>k;
          mini=min(mini,abs(k));
          if(k<0)
          {
            neg++;
            sum+=abs(k);
          }
          else
          {
             sum+=k;
          }
       }
       if(neg%2==0)
       {
        cout<<sum<<endl;
       }
       else
       {
           cout<<sum-2*mini<<endl;
       }
    }
    return 0;
}
      