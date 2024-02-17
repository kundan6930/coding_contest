#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,c;
int solve(  vector<ll>a)
{
    ll s=a[0];
    int f=0,f1=0;
    for(int i=1;i<n;i++)
    {
         s+=a[i];
       //  cout<<s<<endl;
       if(s<(i+1)*c)
       {
        f=1;
        break;
       }
    }
    s=a[n-1];
     for(int i=n-1;i>=0;i--)
    {
         s+=a[i];
       if(s<(i+1)*c*n)
       {
         f1=1;
         break;
       }
    }
    if(f==0 || f1==0)
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
    
    cin>>n>>c;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(solve(a))
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
    return 0;
}