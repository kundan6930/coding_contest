#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,l,r;
bool solve(vector<ll>a,ll k,ll m,pair<ll,ll>&ans)
{
   int i=l-1,j=l-1;
   ll s=0,x=0;
   ll maxi=0,mini=n;
   while(j<r)
   {
        
       if(j-i+1==m)
       {
        s+=a[j];
        x^=a[j];
         if(s-x==k)
         {  
            if(i<mini)
            {
              ans={i+1,j+1};
              mini=i;
            }
         }
         maxi=max(maxi,s-x);
         j++;
       }
       else if(j-i+1>m)
       {
         s-=a[i];
         x^=a[i];
         i++;
       }
       else{
           s+=a[j];
           x^=a[j];
           j++;
       }
     //  cout<<m<<" "<<i<<" "<<j<<" "<<ans.first<<" "<<ans.second<<" "<<s<<" "<<x<<endl;
   }
   if(maxi==k)
   {
    return true;
   }
   return false;
}
int main (){

cin>>n;
vector<ll>a(n);
ll sum=0,x=0;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
cin>>l>>r;
for(int i=l-1;i<r;i++)
{
    sum+=a[i];
    x^=a[i];
}
ll k=sum-x;
ll s=1,e=r-l+1;
pair<ll,ll>ans1;
while(s<=e)
{
    ll m=(s+e)/2;
    pair<ll,ll>ans;
    if(solve(a,k,m,ans))
    {
       ans1=ans;
       e=m-1;
    }
    else
    {
        s=m+1;
    }
}
cout<<ans1.first<<" "<<ans1.second<<endl;
    return 0;
}