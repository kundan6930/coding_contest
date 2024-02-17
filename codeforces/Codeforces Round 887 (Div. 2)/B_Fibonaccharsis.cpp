#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll n1=200002;
void solve(vector<ll>&fib)
{
    fib[1]=(ll)1;
    for(ll i=2;i<n1;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
}
int main (){
int t;
 vector<ll>fib(n1);
 solve(fib);
cin>>t;
while(t--)
{
    ll n,k;
    cin>>n>>k;
     if(k>n1)
    {
        cout<<"0"<<endl;
    }
    else
    {
    ll a=fib[k-2];
    ll b=fib[k-1];
    ll ans=0;
    for(int i=0;i<=n;i++)
    {
        ll p=(n-a*i);
       // cout<<p<<" ";
        ll y=p/b;
        if((p%b==0) && i<=y)
        {
            ans++;
        }
    }
   // cout<<endl;
    cout<<ans<<endl;
    }
    

}
    return 0;
}