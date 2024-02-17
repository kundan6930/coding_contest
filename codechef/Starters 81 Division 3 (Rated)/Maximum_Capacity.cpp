#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
         int x,y;
         cin>>x>>y;
         if(x*y<=500 && x<=8)
         {
            cout<<"YES"<<endl;

         }
         else{
           cout<<"NO"<<endl;
         }
    }
    return 0;
}