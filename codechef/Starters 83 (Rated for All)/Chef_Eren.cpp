#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
       int n,a,b;
       cin>>n>>a>>b;
       int s=0;
       if(n%2==0)
       {
        int k=n/2;
         s+=k*a+k*b;
         cout<<s<<endl;
       }
       else{
             int e=n/2;
             int o=e+1;
                 s+=e*a+o*b;
             cout<<s<<endl;
       }


        
    }
    return 0;
    }