#include <bits/stdc++.h>
using namespace std;
using ll=long long;
bool solve(ll s)
{int c=0;
    for(int i=0;i<=40;i++)
    {
        ll k=(s>>i)&1;
        if(k==1)
        {
            c++;
        }
    }
    if(c%2!=0)
    {
        return true;
    }
    return false;
}
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int n;
cin>>n;
vector<ll>a(n);
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
ll ans=0;
for(int i=0;i<n;i++)
{
    ll s=0;
    for(int j=i;j<n;j++)
    {
        s|=a[j];
        if(solve(s))
        {
            ans+=(ll)1;
        }
    }
}
cout<<ans<<endl;
}
    return 0;
}