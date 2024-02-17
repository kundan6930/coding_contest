#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n,m;
    cin>>n>>m;
    int a[m];
    ll s=0;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
       s+=(ll)a[i];
    }
   if(n%(ll)2==(ll)0)
   {
      ll n1=n;
       n1=n1/2;
      ll sum=n1*(n+1);
      ll ans=sum-s;
      cout<<ans<<endl;
   }
   else
   {
      ll n1=(n+1)/2;
      ll sum=n*n1;
      ll ans=sum-s;
      cout<<ans<<endl;
   }

}
    return 0;
}