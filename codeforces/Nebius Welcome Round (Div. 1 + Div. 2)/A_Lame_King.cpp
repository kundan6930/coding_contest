#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
       int a,b;
       cin>>a>>b;
       int mini=min(abs(a),abs(b));
       int maxi=max(abs(a),abs(b));
       if(maxi==mini)
       {
        cout<<mini*2<<endl;
       }
       else
       {
       int ans=mini*2+((maxi-mini)*2-1);
       cout<<ans<<endl;
       }
         
    }
    return 0;
}