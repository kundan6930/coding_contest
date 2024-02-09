#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n,m;
    cin>>n>>m;
  string s;
  cin>>s;
  vector<int>suf(n+1),pre(n+1);
  suf[n]=n;
  pre[0]=-1;
   for(int i=n-1;i>=0;i--)
   {
      if(s[i]=='1')
      {
         suf[i]=i;
      }
      else{
        suf[i]=suf[i+1];
      }
   }
   for(int i=0;i<n;i++)
   {
      if(s[i]=='0')
      {
         pre[i+1]=i;
      }
      else{
         pre[i+1]=pre[i];
      }
   }
//    for(int i=0;i<=n;i++)
//    {
//        cout<<suf[i]<<" ";
//    }
//    cout<<endl;
//    for(int i=0;i<=n;i++)
//    {
//        cout<<pre[i]<<" ";
//    }
//    cout<<endl;
   int ans=0;
  map<pair<int,int>,int>mp;
   for(int i=0;i<m;i++)
   {
     int s1,e;
     cin>>s1>>e;
     if(suf[s1-1]>pre[e])
     {
        mp[{-2,-2}]++;
      //  cout<<s1<<" "<<e<<endl;
     }
     else
     {
       mp[{pre[e],suf[s1-1]}]++; 
     }
      
   }
   cout<<mp.size()<<endl;

}
    return 0;
}