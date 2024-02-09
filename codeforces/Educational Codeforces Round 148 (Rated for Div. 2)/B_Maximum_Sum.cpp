#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    ll n,k;
    cin>>n>>k;
    ll a[n];
    ll s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    sort(a,a+n);
    ll mini[k+1];
    mini[0]=0;
    int j=0;
     for(int i=0;i<2*k;i+=2)
    {
      mini[j+1]=(mini[j]+a[i]+a[i+1]);
      j++;
    //  cout<<mini[i+1]<<" ";
    }
   // cout<<endl;
    ll maxi[k+1];
    maxi[0]=0;
     for(int i=n-1;i>=n-k;i--)
    {
      maxi[n-i]=(maxi[n-i-1]+a[i]);
    //  cout<<maxi[n-i]<<" ";
    }
   // cout<<endl;
    ll m=0;
    int i=0; 
    while(k>=0)
    {
       m=max(m,s-(mini[i]+maxi[k]));
       i++; 
       k--;
     //  cout<<m<<" *"<<endl; 
    }
    cout<<m<<endl;

    
   
   
}
    return 0;
}