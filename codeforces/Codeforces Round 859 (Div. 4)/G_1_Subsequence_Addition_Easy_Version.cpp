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
     sort(a.begin(),a.end());
     ll s=1,f=0;
     if(a[0]!=1)
     {
        cout<<"NO"<<endl;
     }
     else{
     for(int i=1;i<n;i++)
     {  
        
        //cout<<s<<" "<<a[i]<<endl;
        if(a[i]>s)
        {
            f=1;
            break;
        }
        s+=a[i];
     }
   if(f==1)
   {
    cout<<"NO"<<endl;
   }
   else
   {
     cout<<"YES"<<endl;
   }
     }
        
    }
    return 0;
    }