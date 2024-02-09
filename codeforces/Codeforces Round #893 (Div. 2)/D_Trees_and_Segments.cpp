#include <bits/stdc++.h>
using namespace std;
using ll=long long;
// ll solve(string s, ll n, ll k, ll pos, ll prev)
// {
//     if(k<=0)
//     {
//         return 0;
//     }
//     if(pos==n)
//     {
//         return 0;
//     }
//     if(s[pos]=='1')
//     {
//         if(prev==0)
//         {
//             solve(s,n,k-1,pos+1,0)+1;
//         }
//         else
//         {

//         }
//     }
// }
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    ll n,k;
    cin>>n>>k;
    string st;
    cin>>st;
    int i=0,j=0;
    int z=0,o=0;
    int maxi0=0;
    int s=0,e=0;
    while(j<n)
    {
        if(st[j]=='1')
        {
            o++;
        }
        else
        {
            z++;
        }
       if(o<=k)
       {
         // maxi0=max(maxi0,j-i+1);
          if(j-i+1>maxi0)
          {
              s=i;
              e=j;
              maxi0=j-i+1;
          }
       }
       while(o>k)
       {
          if(st[i]=='1')
        {
            o--;
        }
        else{
            z--;
        }
        i++;
        
       }
       maxi0=max(maxi0,j-i+1);
       j++;
    }
    string str;
    if(k!=0)
    {
    for(int i=0;i<n;i++)
    {
        if(i>=s && i<=e)
        {
            str+='0';
        }
        else{
            str+=st[i];
        }
    }
    }
    else{
        str=st;
    }
    int maxi1=0,c1=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='1')
        {
            c1++;
            maxi1=max(maxi1,c1);
        }
        else
        {
           c1=0;
        }
    }
     maxi1=max(maxi1,c1);
  //  cout<<maxi0<<" "<<str<<" "<<maxi1<<endl;
     i=0,j=0;
     z=0,o=0;
    int maxi11=0;
     s=0,e=0;
    while(j<n)
    {
        if(st[j]=='1')
        {
            o++;
        }
        else
        {
            z++;
        }
       if(z<=k)
       {
         // maxi0=max(maxi0,j-i+1);
          if(j-i+1>maxi11)
          {
              s=i;
              e=j;
              maxi11=j-i+1;
          }
       }
       while(z>k)
       {
          if(st[i]=='1')
        {
            o--;
        }
        else{
            z--;
        }
        i++;
        
       }
       maxi11=max(maxi11,j-i+1);
       j++;
    }
    string str1;
    if(k!=0)
    {
    for(int i=0;i<n;i++)
    {
        if(i>=s && i<=e)
        {
            str1+='1';
        }
        else{
            str1+=st[i];
        }
    }
    }
    else{
        str1=st;
    }
    int maxi10=0;c1=0;
    for(int i=0;i<n;i++)
    {
        if(str1[i]=='0')
        {
            c1++;
            maxi10=max(maxi10,c1);
        }
        else
        {
           c1=0;
        }
    }
     maxi10=max(maxi10,c1);
  // cout<<maxi11<<" "<<str1<<" "<<maxi10<<endl;
   for(int i=1;i<=n;i++)
   {
      int k1=(maxi0*i)+maxi1;
      int k2=(maxi10*i)+maxi11;
     // cout<<k1<<" "<<k2<<endl;
       cout<<max(k1,k2)<<" ";
   }
   cout<<endl;
}
    return 0;
}