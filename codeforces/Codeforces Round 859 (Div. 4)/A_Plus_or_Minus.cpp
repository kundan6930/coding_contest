#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
       int a,b,c;
       cin>>a>>b>>c;
       int p=a+b;
       int m=a-b;
       if(c==p)
       {
        cout<<"+"<<endl;
       }
       else if(c==m)
       {
           cout<<"-"<<endl;
       }



        
    }
    return 0;
    }