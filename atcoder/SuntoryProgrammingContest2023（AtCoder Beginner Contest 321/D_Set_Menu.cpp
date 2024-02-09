#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,m,p;
cin>>n>>m>>p;
vector<ll>a(n),b(m);
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
ll s=0;
vector<ll>pre(m+1);
for(int i=0;i<m;i++)
{
    cin>>b[i];
}
sort(b.begin(),b.end());
for(int i=0;i<m;i++)
{
    s+=b[i];
    pre[i+1]=s;
}
ll ans=0;
for(int i=0;i<n;i++)
{
    auto it=lower_bound(b.begin(),b.end(),p-a[i]);
    if(it!=b.end())
    {
         ll k=it-b.begin();
         ans+=(k*a[i]);
         ans+=pre[k];
         ans+=((m-k)*p);
       //  cout<<k<<" "<<ans<<" "<<a[i]<<" "<<pre[k]<<endl;
    }
    else
    {
        
         ans+=(m*a[i]);
         ans+=pre[m];
      //   cout<<n<<" "<<ans<<endl;
    }  
}
cout<<ans<<endl;
    return 0;
}