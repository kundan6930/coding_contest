#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=1;
    char ch;
    string ans;
    int i;
    for(i=1;i<n;i++)
    {
      
       if(s[i]==s[i-1])
       {
        
        c++;
    
       }
       else
       {
       
       if(c%2!=0)
       {
          ans+=s[i-1];
       }
       else{
        
            ans+=s[i-1];
            ans+=s[i-1];
            
         
       }
       }
       c=1;
         

        
    }
    if(c%2!=0)
       {
          ans+=s[n-1];
       }
       else{
        
            ans+=s[n-1];
            ans+=s[n-1];
            
         
       }

     cout<<ans<<endl;
        
    }
    return 0;
    }