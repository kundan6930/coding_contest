#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
map<string,int>ans;
void solve(string &s,int pos)
{ 
   if(pos>=n)
   {
    ans[s]++;
    return ;
   }
   for(int i=pos;i<n;i++)
   {
      if(i!=pos && s[i]==s[pos]) 
      {
        continue;
      }
      else
      {
         swap(s[i],s[pos]);
         solve(s,pos+1);
         swap(s[i],s[pos]);
     }
   }
}
int main (){
 string s;
 cin>>s;
 n=s.length();
 sort(s.begin(),s.end());
   solve(s,0); 
 cout<<ans.size()<<endl;
  for(auto i:ans)
  {
    cout<<i.first<<endl;
  }
    return 0;
}