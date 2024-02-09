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
    
     ll ans=sqrt(n);
     if(ans*ans==n)
     {
        cout<<ans-1<<endl;
     }
     else
     {
         cout<<ans<<endl;
     }
 

        
    }
    return 0;
    }