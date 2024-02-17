#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
      string s;
      cin>>s;
      int n=s.length();
      if(n>1)
      {
      ll a=s[n-1]-'0';
      ll b=s[n-2]-'0';
      b=b%2;
      ll ans=b*10+a;
      cout<<ans<<endl;
      }
      else{
        cout<<s[0]-'0'<<endl;
      }


        
    }
    return 0;
    }