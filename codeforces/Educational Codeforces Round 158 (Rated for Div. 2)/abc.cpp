#include <bits/stdc++.h>
using namespace std;
using ll=long long;
vector<string>solve(vector<string>&a,vector<string>&b)
{
      int n=a.size();
      vector<string>ans;
       vector<int>a1(26),b1(26);
       vector<int>a2(26),b2(26);
       for(int i=0;i<n;i++)
       {
        for(int j=0;j<a[i].length();j++)
        {
          if(i%2==0)
          {
            a1[a[i][j]-'a']++;
          }
          else
          {
            b1[a[i][j]-'a']++;
          }
        }
        for(int j=0;j<b[i].length();j++)
        {
          if(i%2==0)
          {
            a2[b[i][j]-'a']++;
          }
          else
          {
            b2[b[i][j]-'a']++;
          }
        }
        int f=0,f1=0;
         for(int j=0;j<26;j++)
         {
            if(a1[j]!=a2[j])
            {
                f=1;
                break;
            }
         }
         for(int j=0;j<26;j++)
         {
            if(b1[j]!=b2[j])
            {
                f=1;
                break;
            }
         }
         if(f==0 && f1==0)
         {
            ans.push_back("Yes");
         }
         else{
             ans.push_back("No");
         }
       }
       return ans;
}
int main (){
int n;
cin>>n;
vector<string>a(n),b(n);
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
{
    cin>>b[i];
}
vector<string>ans=solve(a,b);
for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<" ";
}
cout<<endl;
    return 0;
}