#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
       ll n,k;
      cin>>n>>k;
      string s;
      cin>>s;
      vector<ll>l(26,0);
      vector<ll>u(26,0);
      for(int i=0;i<n;i++)
      {
        if(isupper(s[i]))
        {
            u[s[i]-'A']++;
        }
        else
        {
            l[s[i]-'a']++;
        }
      }
      ll c=0;
      for(int i=0;i<26;i++)
      {
         c+=min(l[i],u[i]);
         ll a=abs(l[i]-u[i]);
         if(k>0)
         {
            ll r=a/2;
            c+=min(r,k);
            k-=min(r,k);
         }
      }
      cout<<c<<endl;


        
    }
    return 0;
    }