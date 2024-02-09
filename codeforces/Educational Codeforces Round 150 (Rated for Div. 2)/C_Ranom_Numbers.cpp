#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll solve(int k)
{
  
  ll ans=1;
  while(k>0)
  {
    ans*=10;
    k--;
  }
  return ans;
}
int  main (){
ll t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
   ll n=s.length();
   
//cout<<sum<<endl;
vector<vector<ll>>a(5,vector<ll>(n,0));
vector<vector<ll>>b(5,vector<ll>(n,0));
ll maxi2=0;
 ll sum=0;
 vector<ll>max1(n);
 max1[n-1]=0;
 for(ll i=n-1;i>0;i--)
{
  ll k=s[i]-'A';
  maxi2=max(maxi2,k);
  max1[i-1]=maxi2;
}
for(ll i=n-1;i>=0;i--)
{
  ll k=s[i]-'A';
  if(k>=max1[i])
  {
     sum+=solve(k);
  }
  else{
     sum-=solve(k);
  }
}
for(ll i=1;i<n;i++)
{
   for(ll j=0;j<5;j++)
   {
    b[j][i]=b[j][i-1];
    if((s[i-1]-'A')==j)
    {
     b[j][i]+=1;
    }
   }
}
   ll maxi=sum;
   for(ll i=0;i<5;i++)
   {
    for(ll j=0;j<n;j++)
    {
       ll old=s[j]-'A';
       ll new1=i;
       // +
        ll temp=0;
       if(old>=new1)
       {
          for(ll k=new1 ;k<old;k++)
          { 
          //  cout<<max1[j]<<endl;
            if(k>max1[j])
            {
             temp+=(b[k][j]*solve(k));
            }
          }
          temp*=2;
          if(max1[j]>old)
          {
            temp+=solve(old);
          }
          else{
              temp-=solve(old);
          }
          if(max1[j]>new1)
          {
             temp-=solve(new1);
          }
          else{
             temp+=solve(new1);
          }
      
       }
       // -
       else
       {
          for(ll k=old ;k<new1;k++)
          {
            if(new1>max1[j])
            {
              if(k>=max1[j])
              {
               temp-=(b[k][j]*solve(k));
              }
            }
            else
            {
              if(k>max1[j])
              {
               temp-=(b[k][j]*solve(k));
              }
            }
            
          }
          temp*=2;
          if(max1[j]>old)
          {
            temp+=solve(old);
          }
          else{
              temp-=solve(old);
          }
          if(max1[j]>new1)
          {
             temp-=solve(new1);
          }
          else{
          
            temp+=solve(new1);
           
          }
       }
      // cout<<temp<<endl;
    // cout<<temp<<" "<<i<<" "<<j<<" "<<old<<" "<<new1<<endl;
       maxi=max(maxi,sum+temp);
     //  cout<<maxi<<" "<<i <<" "<<j<<endl;
    }
   }
   cout<<maxi<<endl;

}
    return 0;

}