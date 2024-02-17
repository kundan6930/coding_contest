#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ll n;
 cin>>n;
 ll s=(n*(n+1))/2;
 if(s%2!=0)
 {
    cout<<"NO"<<endl;
 }
 else
 {
    cout<<"YES"<<endl;
   
    if(n%2==0)
    {
         int i=1,j=n;
        int k=n/4;
        cout<<2*k<<endl;
    while(i<=k)
    {
        
        cout<<i<<" ";
        i++;
    }
    while(j>n-k)
    {
        cout<<j<<" ";
        j--;
    }
    cout<<endl;
     i=k+1;
     cout<<2*k<<endl;
     for(;i<=n-k;i++)
     {
        cout<<i<<" ";
     }
     cout<<endl;
    }
    else
    {
       int i=1,j=n;
        int k=n/4;
        cout<<2*k+1<<endl;
         while(i<=k)
      {
        
        cout<<i<<" ";
        i++;
      }
    while(j>=n-k)
    {
        cout<<j<<" ";
        j--;
    }
    cout<<endl;
     i=k+1;
     cout<<2*k+2<<endl;
     for(;i<n-k;i++)
     {
        cout<<i<<" ";
     }
     cout<<endl;
    }
 }
    return 0;
}