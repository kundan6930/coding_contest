#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
ll n;
cin>>n;
vector<ll>a(n),b(n-1);
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n-1;i++)
{
    cin>>b[i];
}
ll ans=0;
for(int i=0;i<n-1;i++)
{
  a[b[i]-1]=a[b[i]-1]+a[i+1];
}
for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;
    return 0;
}