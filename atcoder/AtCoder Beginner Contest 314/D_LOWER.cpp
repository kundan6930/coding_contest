#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
string s;
cin>>s;
int q;
cin>>q;
int maxi1=-1,maxi2=-1;
vector<pair<int,int>>kk;
for(int i=0;i<q;i++)
{
    int a1,b1;
    char ch;
    cin>>a1>>b1>>ch;
     
    if(a1==1)
    {
       s[b1-1]= ch;
       kk.push_back({i,b1-1});
    }
    else if(a1==2)
    {
       maxi2=max(maxi2,i);
    }
    else{
       maxi1=max(maxi1,i); 
    }
}
int maxi=max(maxi1,maxi2);
//cout<<maxi1<<" "<<maxi2<<endl;
if(maxi==-1) 
{
   cout<<s<<endl; 
}

else
{
   if(maxi2>maxi1)
   {
      map<int,int>mp;
      for(int i=0;i<kk.size();i++)
      {
        if(kk[i].first>maxi2)
        {
           mp[kk[i].second]++;
        }
      }
      for(int i=0;i<n;i++)
      {
        if(mp[i]<=0)
        {
           s[i]=tolower(s[i]) ;
        }
      }
      cout<<s<<endl;  
   }
   else{
    map<int,int>mp;
      for(int i=0;i<kk.size();i++)
      {
        if(kk[i].first>maxi1)
        {
           mp[kk[i].second]++;
        }
      }
      for(int i=0;i<n;i++)
      {
        if(mp[i]<=0)
        {
           s[i]=toupper(s[i]) ;
        }
      }
      cout<<s<<endl;  
   }
}
    return 0;
}