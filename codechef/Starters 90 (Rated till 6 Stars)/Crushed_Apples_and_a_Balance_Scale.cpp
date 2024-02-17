#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
ll t;
cin>>t;
while(t--)
{
    ll m,n;
    cin>>m>>n;
    if(n>m)
    {
        cout<<"NO"<<endl;
    }
    else
    {
      while(m%2==0)
      {
        m=m/2;
      }
      if(n%m==0)
      {
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    
}
    return 0;
}