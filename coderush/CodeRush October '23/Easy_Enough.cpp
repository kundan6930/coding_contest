#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
ll n;
cin>>n;
string s;
cin>>s;
vector<ll>pre(n+1),pre1(n+1);
pre[0]=0;
pre1[0]=0;
for(ll i=1;i<=n;i++)
{
    if(s[i]=='1')
    {    
        pre[i]=pre[i-1]+(i*i);
    }
    else
    {
        pre1[i]=pre[i-1];
    }
     if(s[i]=='0')
    {    
        pre1[i]=pre1[i-1]+(i*i);
    }
    else
    {
        pre1[i]=pre1[i-1];
    }
}
ll s1=0;
ll s0=0;
for(ll i=0;i<n;i++)
{
    if(s[i]=='1')
    {    
       s1+=(i+1)*(i+1); 
    }
    else
    {
         s0+=(i+1)*(i+1); 
    }
}
ll q;
cin>>q;
ll c=0;
for(ll i=0;i<q;i++ )
{
    ll ty,l,r;
    cin>>ty>>l>>r;
    if(ty==1)
    {
        s1-=()
    }
    else
    {
       if(c%2==0)
       {
          
       }
    }
}

    return 0;
}