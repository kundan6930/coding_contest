#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int n;
cin>>n;
ll a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
sort(a,a+n);
if(n%2==0)
{ 
    ll s1=0,s2=0;
   int k1=n/2;
   int k2=k1-1;
   for(int i=0;i<n;i++)
   {
     s1+=abs(a[i]-a[k1]);
     s2+=abs(a[i]-a[k2]);
   }
   cout<<min(s1,s2)<<endl;
}
else
{
      ll s=0;
   int k=n/2;
   for(int i=0;i<n;i++)
   {
    
     s+=abs(a[i]-a[k]);
   }
   cout<<s<<endl;
}

    return 0;
}