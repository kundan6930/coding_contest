#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    ll w,h,n;
    cin>>w>>h>>n;
    ll k=1;
    while(w%2==0)
    {
        k*=2;
        w/=2;
    }
   ll k1=1;
    while(h%2==0)
    {
        k1*=2;
        h/=2;
    }
    ll ans=k1*k;
    if(ans<n)
    {
        cout<<"No"<<endl;
    }
    else{
         cout<<"Yes"<<endl;
    }
}
    return 0;
}