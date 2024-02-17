#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 

    ll x,y;
    cin>>x>>y;
    if(x/2>y/2)
    {
        cout<<"chef"<<endl;
    }
    else if(x%2!=0 )
    {
        if(x==y || x+1==y)
        {
            cout<<"chef"<<endl;
        }
        
    }
    else 
    {
        
             cout<<"chefina"<<endl;
    }
   

        
    }
    return 0;
    }
    