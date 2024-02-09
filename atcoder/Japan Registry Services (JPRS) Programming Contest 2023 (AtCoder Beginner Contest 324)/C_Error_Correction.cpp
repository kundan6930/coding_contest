#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 int n;
 cin>>n;
 string t;
 cin>>t;
 vector<int>a(26);
 int n1=t.length();
 for(int i=0;i<t.length();i++)
 {
    a[t[i]-'a']++;
 }
vector<int>ans;
int n2;
 for(int i=0;i<n;i++)
 {
   string s;
   cin>>s;
   n2=s.length();
   if(n1==n2)
   {
     int c=0;
     for(int j=0;j<n1;j++)
     {
       if(s[j]!=t[j])
       {
         c++;
         if(c>=2)
         {
            break;
         }
       }
     }
     if(c<=1)
     {
        ans.push_back(i+1);
     }
   }
   else if(n1+1==n2)
   {
      int j=0,j1=0,c=0;
      while(j<n2 && j1<n1)
      {
         if(s[j]==t[j1])
         {
            j++;
            j1++;
         }
         else
         {
           c++;
           j++;
           if(c>=2)
           {
            break;
           }
         }
      }
      if(c<=1)
     {
        ans.push_back(i+1);
     }
   }
   else if(n2+1==n1)
   {
    int j=0,j1=0,c=0;
      while(j<n2 && j1<n1)
      {
         if(s[j]==t[j1])
         {
            j++;
            j1++;
         }
         else
         {
           c++;
           j1++;
           if(c>=2)
           {
            break;
           }
         }
      }
      if(c<=1)
     {
        ans.push_back(i+1);
     }
   }
 }
 int k1=ans.size();
 cout<<k1<<endl;
 for(int i=0;i<k1;i++)
 {
   cout<<ans[i]<<" ";
 }
 cout<<endl;
    return 0;
}