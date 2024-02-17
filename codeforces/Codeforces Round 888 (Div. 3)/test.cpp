#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
   string s="??WWRRR???";
  vector<int>a(26,0);
  for(int i=0;i<s.length();i++)
  {
    int k=s[i]-'a';
   // cout<<a[k]++<<endl;
      a[s[i]-'a']++;
  }
  for(int i=0;i<s.length();i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
    return 0;
}