#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
     int n,m;
     cin>>n>>m;
     if(m>=n)
     {
       cout<<"0"<<endl;
     }
     else{
        cout<<n-m<<endl;
     }


        
    }
    return 0;
    }