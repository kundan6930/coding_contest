#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    vector<ll>a(n),pre(n);
    ll s=0;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    vector<ll>b=a;
    sort(b.begin(),b.end());
    for(int i=0;i<n;i++)
    {
      s+=b[i];
      pre[i]=s;
    }
    for(int i=0;i<n;i++)
    {
        ll res=0;
        auto it=lower_bound(b.begin(),b.end(),a[i]);
        ll k=it-b.begin();
        if(it!=b.end())
        {
        if(it==b.begin())
        {
            res=s-a[i]*n;
        }
        else{
            res=s-pre[k-1];
            res-=((n-k)*a[i]);
            res+=k*a[i]-pre[k-1];
        }
        cout<<res+n<<" ";
        }
    }
    cout<<endl;

}
    return 0;
}