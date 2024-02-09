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
  vector<ll>a(n),c(n+1,0) ;
  ll mini=INT_MAX,maxi=0;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    c[a[i]]++;
    mini=min(mini,a[i]);
    maxi=max(maxi,a[i]);
  }
  ll ct=0;
  for(int i=1;i<=n;i++)
  {
    if(c[i])
    {
        ct++;
    }
  }
  ll s=0,ans;
  if(ct==1)
  {
     if(c[mini]==1)
     {
        s=0;
     }
     else if(c[mini]<=4)
     {
        s=1;
     }
     else
     {
        ll temp=c[mini]-4;
        if(temp%3!=0)
        {
            s=temp/3;
            s+=1;
        }
        else
        {
           s=temp/3; 
        }
        s+=1;
     }
    
  }
  else
  {
    ll s1=0,s2=0;
  for(int i=mini+1;i<maxi;i++)
  {
        if(c[i]>3)
        {
            s1+=(c[i]-3);
        }
        else{
            if(c[i])
            {
            s2+=(3-c[i]);
            }
        }
  }
  ll temp=c[mini]+c[maxi];
    if(temp<4)
    {
        s2+=(4-temp);
    }
    else
    {
        s1+=(temp-4);  
    }
    if(s1-s2<0)
    {
        s=0;
    }
    else
    {
        ll te=s1-s2;
        if(te%3==0)
        {
          s=(te/3);
        }
        else
        {
           s=(te/3);
           s+=1;
        }
    }
  }
     ans=s*k;
     cout<<ans<<endl; 
}
    return 0;
}