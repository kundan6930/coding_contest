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
      vector<ll>a(n);
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      ll c=0;
      ll s=0;
      for(int i=0;i<n;i++)
      {
         s+=a[i];
         float k=((float)s/(float)(i+1))*(float)100;
         if(k==100)
         {
            c++;
            //cout<<c<<" "<<i<<endl;
         }
      }
      cout<<c<<endl;




        
    }
    return 0;
    }