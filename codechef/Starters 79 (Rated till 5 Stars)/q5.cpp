#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int solve(ll n,ll m,ll q,vector<ll>&ans)
{
    ll i=1;
    while(q<=0)
    {
    if(q/i>=m)
    {
       ans[i]=m;
       q-=(i*m);
    }
    else
    {
       ans[i]=(q/i)+1;
        q=q%i;
        ans[i-q]--;
        q=0;

    }
    i++;
    }
    return i;
}
int main ()
{
      ll n,m,q;
      cin>>n>>m>>q;
      while(q--)
      {
        ll s;
        cin>>s;
        vector<ll>ans(n,0);
        ll d=solve(n,m,q,ans);
        int i=0;
        cout<<"1"<<" "<<d-1<<endl;
        while(ans[i])
        {
           cout<<ans[i]<<" ";
           i++;
        }
        cout<<endl;

      }


        
    
    return 0;
    }
    