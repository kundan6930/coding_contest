#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
       ll n,k,d,w;
       cin>>n>>k>>d>>w;
       vector<ll>a(n);
       for(int i=0;i<n;i++)
       {
         cin>>a[i];
       }
        ll pos=0,dis=1,c=0;
       for(int i=0;i<n;i++)
       {
          if(pos==0 || dis<=a[i])
          {
            c++;
            pos=k-1;
            dis=a[i]+w+d+1;
            }
          else
          {
            pos--;
          }  
       }
       cout<<c<<endl;

    }
    return 0;
}