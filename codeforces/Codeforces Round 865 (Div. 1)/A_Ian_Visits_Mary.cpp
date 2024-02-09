#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
      ll a,b;
      cin>>a>>b;
      ll h=max(a,b);
      ll l=min(a,b);
     // ll k=h/l;
      /*if(h%l!=0)
      {
        cout<<"1"<<endl;
        cout<<a<<" "<<b<<endl;
      }
      else if(h%l==0 && l<2)
      {
        cout<<"1"<<endl;
        cout<<a<<" "<<b<<endl;
      }
      else
      {*/
         cout<<"2"<<endl;
         cout<<a-1<<" "<<"1"<<endl;
         cout<<a<<" "<<b<<endl;
      //}



        
    }
    return 0;
    }