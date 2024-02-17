#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll n;
ll solve(string &s,ll pos,ll pre,ll c,ll c1)
{
    if(pos==n)
    {
        return 0;
    }
    if(s[pos]=='0')
    {  //cout<<pos<<" "<<"*"<<endl;
        ll k=solve(s,pos+1,pre,c+1,c1);
       // cout<<k<<" "<<pos<<" "<<"*"<<endl;
       return k; 
    }
    else if(s[pos]=='4')
    {
       // cout<<pos<<" "<<"#"<<endl;
        ll k1=solve(s,pos+1,pre+c,c,c1+1)+(c1*c-pre);
       //   cout<<k1<<" "<<pos<<" "<<"#"<<endl;
       return  k1;
    }
   else
    {
      //  cout<<pos<<" "<<"$"<<endl;
       ll l= solve(s,pos+1,pre,c+1,c1);
       ll r=solve(s,pos+1,pre+c,c,c1+1)+(c1*c-pre);
      //    cout<<l+r<<" "<<pos<<" "<<"$"<<endl;
       return l+r;
    }
}
int main (){
int t;
cin>>t;
while(t--)
{
    cin>>n;
    string s;
     cin>>s;
  cout<<solve(s,0,0,0,0)<<endl;

}
    return 0;
}