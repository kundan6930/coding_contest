#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
     int n,p,q;
     cin>>n>>p>>q;
     string s;
     cin>>s;
     int i=0;
     for(int k=0;k<n;k++)
     {
     if(p>0)
     {
        int mini=min(25,p);
        for(int i=0;i<mini;i++)
        {
        if(s[k]=='z')
        {
            s[k]='a';
        }
        else{
           s[k]=s[k]+1 ;
        }
        if(s[k]=='b')
        {
            break;
        }
        }
        p-=mini;
     }
     else if(q>0)
     {
        int mini=min(25,q);
        for(int i=0;i<mini;i++)
        {
        if(s[k]=='a')
        {
            s[k]='z';
        }
        else{
           s[k]=s[k]-1 ;
        }
        if(s[k]=='y')
        {
            break;
        }
        }
        q-=mini;
     }
     else{
        break;
     }
     }
  cout<<s<<endl;


        
    }
    return 0;
    }