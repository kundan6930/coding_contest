#include <bits/stdc++.h>
using namespace std;
using ll=long long;
bool solve(vector<ll>a,ll m, ll k)
{
    ll s=0;
    int n=a.size();
    ll maxi=0;
    // int i=0,j=0;
    // ll s1=0;
    int len=0;
    // while(j<n)
    // {
    //         s1+=a[j];
    //     while(i<n && s1>m)
    //     {
    //         s1-=a[i];
    //         i++;
    //     }
    //     if(s1==m) 
    //     {
    //         len=j-i+1;
    //         break;
    //     }
    //   //  cout<<s1<<" "<<i<<" "<<j<<" "<<m<<endl;
    //     j++;
    // }
    for(int i=0;i<n;i++)
    {
        s+=a[i];
        maxi=max(maxi,a[i]);
    }
    if( maxi>m)
    {
        return false;
    }
    s=0;ll c=0;
    for(int i=0;i<n;i++)
    {
      s+=a[i];
      
      if(s>m)
      {
        c++;
        s=a[i];
      }
    }
     if(s<=m)
      {
         c++;
      }
    if(c<=k)
    {
        return true;
    }
    // if(n-len+1>=k)
    // {
    //     return true;
    // }
    return false;
}
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);

    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    ll maxi=0,sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        maxi=max(maxi,a[i]);
        sum+=a[i];
    }
   ll s=maxi, e=sum,ans=0;
   while(s<=e)
   {
    ll m=(s+e)/2;
       if(solve(a,m,k))
       {
        ans=m;
          e=m-1;
       }
       else{
        s=m+1;
       }
   }
   cout<<ans<<endl;


    return 0;
}