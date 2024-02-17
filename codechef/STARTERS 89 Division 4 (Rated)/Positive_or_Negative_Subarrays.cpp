#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll p=0,ne=0;
    for(int i=0;i<n;i++)
    {
      if(a[i]<0)  
      {
        ne+=(i+1);
      }
      else{
        p+=(i+1);
      }
    }
    cout<<abs(p-ne)<<endl;



}
    return 0;
}