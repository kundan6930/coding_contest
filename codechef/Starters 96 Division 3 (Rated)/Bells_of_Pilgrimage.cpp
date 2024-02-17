#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n,x,k,p;
    cin>>n>>x>>k>>p;
    int k1=k;
    int ans=p;
    if(x>=k)
    {
      ans+=(k*10);
      cout<<ans<<endl;
    }
    else
    {
      ans+=(x*10);
      k-=x;
      ans+=(k*5);
      if(n==k1)
      {
        cout<<ans+20<<endl;
      }
      else{
        cout<<ans<<endl;
      }
      
    }

}
    return 0;
}