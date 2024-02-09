#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
    long long a,b ,n,m;
    cin>>a>>b;
    cin>>n>>m;
    long long s=0;
     if(n%(m+1))
     {
        s=(n/(m+1))*m*a;
        s+=((n%(m+1))*min(a,b));
     }
     
     else
     {
       s=(n/(m+1))*m*a;
     }
    cout<<min({s,n*a,n*b})<<endl;
        
    }
    return 0;
    }
