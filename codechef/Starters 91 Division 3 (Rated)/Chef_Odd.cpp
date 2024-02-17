#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    ll n,k;
    cin>>n>>k;
    ll d=n/k;
    ll o;
    if(n%2==0)
    {
        o=n/2;
    }
    else
    {
        o=(n/2)+1;
    }
    ll c=o-k;
   // ll m=o%k;
    if(d>=2)
    {
        if(c%2==0)
        {
            
            cout<<"YES"<<endl;
        }
             else
             {
             cout<<"NO"<<endl; 
            }
        }
       
    
    else{
           cout<<"NO"<<endl; 
        }
}
    return 0;
}