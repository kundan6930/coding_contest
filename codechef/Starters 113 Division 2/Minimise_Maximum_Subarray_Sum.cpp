#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    ll x,y;
    cin>>x>>y;
    if(y>=x)
    {
        cout<<"1"<<endl;
    }
    else if(y+1==x)
    {
        cout<<"1"<<endl;
    }
    else{
        ll k=x/(y+1);
        if(x%(y+1)!=0) 
        {
            k++;
        }
        ll k1=x-2*y;
        ll ans=max(k,k1);
        cout<<ans<<endl;
   }
}
    return 0;
}