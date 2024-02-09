#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
   int n,m;
   cin>>n>>m;
   string s1,s2,s;
   cin>>s1>>s2;
   s=s1;
   for(int i=m-1;i>=0;i--)
   {
     s.push_back(s2[i]);
   }
   int c=0;
   for(int i=0;i<n+m-1;i++)
   {
    if(s[i]==s[i+1])
    {
        c++;
    }
   }
   
      if(c<=1)
      {
        cout<<"yes"<<endl;
      }
      else{
        cout<<"no"<<endl;
      }
     
        
    }
    return 0;
    }