 #include <bits/stdc++.h>
using namespace std;
using ll=long long;
 ll n,k;
bool solve(ll m,vector<ll>&a)
{
     ll s1=m*k;
     ll s=0;
     for(int i=0;i<n;i++)
     {
        s+=a[i];
     }
   //  cout<<m<<" "<<s<<" "<<s1<<endl;
     if(s>=s1)
     {
        return true;
     }
     return false;
}
int main (){
int t;
cin>>t;
while(t--)
{
   
    cin>>n>>k;
    vector<ll>a(n);
     ll sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    ll s=0,e=(sum/k)+10,ans=0;
    while(s<=e)
    {
        ll m=(s+e)/2;  
        if(solve(m,a))
        {
           ans=m;
           s=m+1;
        }
        else
        {
            e=m-1;
        }
     }
    cout<<ans<<endl;
    }
    return 0;
}