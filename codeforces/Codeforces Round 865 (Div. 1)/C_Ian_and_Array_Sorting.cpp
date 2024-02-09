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
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
       ll f=0;
       for(ll i=n-1;i>0;i-=2)
       {
        if(a[i-1]>a[i])
        {
            if(i==1)
            {
                f=1;
            }
            else{
                a[i-2]-=(a[i-1]-a[i]);
            }
        }
        else{
            if(i>=2)
            {
                a[i-2]+=(a[i]-a[i-1]);
            }
        }
       }
        if(f==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
       }


        
    
    return 0;
    }