#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll mod=1e9;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    ll s1=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        s1+=a[i];
    }
    ll i=0,j=n-1;
    ll s=0,e=0;
    while(i<n && a[i]==1)
    {
        i++;
        s++;
    }
    while(j>=0 && a[j]==1)
    {
        j--;
        e++;
    }
    if(i>=j)
    {
        cout<<"1"<<" "<<"1"<<endl;
    }
    else
    {
        ll p=1,f=0;
       for(int k=i;k<=j;k++) 
       {
          if(a[k]*p>mod  || a[k]*p>=s1)
          {
            f=1;
            break;
          }
          p*=a[k];
       }
       if(f==1)
       {
          cout<<i+1<<" "<<j+1<<endl;
       }
       else
       {
          p+=(s+e);
          if(p>=s1)
          {
            cout<<i+1<<" "<<j+1<<endl;
          }
          else{
             cout<<"1"<<" "<<"1"<<endl;
          }
       }
    }
  //  cout<<s<<" "<<e<<endl;
}
    return 0;
}