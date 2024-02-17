#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll n;
ll solve(string s,ll pos,ll k)
{
    if(k>n-k)
    {
        return 0;
    }
    if(pos==n)
    {
      if(k==n-k)
      {
        return 1;
      }
      else
      {
        return 0;
      }
    }
    if(s[pos]=='(')
    {
      return solve(s,pos+1,k+1);
    }
    else if(s[pos]==')')
    {
        return solve(s,pos+1,k);
    }
    else
    {
          return solve(s,pos+1,k+1)+solve(s,pos+1,k);
    }
}
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
 string s;
 cin>>s;
 n=s.length();
 cout<<solve(s,0,0)<<endl;
    return 0;
}