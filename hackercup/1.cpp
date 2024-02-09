#include <bits/stdc++.h>
using namespace std;
using ll=long long;
bool solve(vector<ll>a,ll k)
{
    a.push_back(k);
     int n=a.size();
     int i=0,j=n-1;
     sort(a.begin(),a.end());
     ll k1=a[0]+a[n-1];
     while(i<j)
     {
        if(a[i]+a[j]!=k1)
        {
            return false;
        }
        i++;
        j--;
     }
     return true;
}
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
ll t1=t;
while(t--)
{
   ll n;
   cin>>n;
   vector<ll>a(2*n-1);
   ll s=0;
   for(ll i=0;i<2*n-1;i++)
   {
     cin>>a[i];
     s+=a[i];
   }
   sort(a.begin(),a.end());
   ll ans=0,ans1=INT_MAX;
   ll k1=a[0]+a[2*n-2];
   ll k=n*k1-s;
   if(k>0)
   {
    if( solve(a,k))
    {
       
       ans1=min(ans1,k); 
    }
   }
   k1= s-n*a[2*n-2];
   if(k1>0)
   {
      double a1=(double)k1/(double(n)-double(1));
      if(ceil(a1)==floor(a1))
      {
         if(solve(a,(ll)a1))
         {
            ans1=min(ans1,(ll)a1);
         }
      }
   }
     k1= s-n*a[0];
      if(k1>0)
   {
      double a1=(double)k1/(double(n)-double(1));
      if(ceil(a1)==floor(a1))
      {
         if(solve(a,(ll)a1))
         {
            ans1=min(ans1,(ll)a1);
         }
      }
   }
   if(ans1==INT_MAX)
   {
    cout<<"Case #"<<t1-t<<": -1"<<endl;
   }
   else
   {
    cout<<"Case #"<<t1-t<<": "<<ans1<<endl;
   }
}
    return 0;
}