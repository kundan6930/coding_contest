#include <bits/stdc++.h>
using namespace std;
string ans="";
bool solve(string a,string b)
{ 
    map<string,int>m;
    
    for(int i=0;i<a.length()-1;i++)
    {
        string s="";
        s+=a[i];
        s+=a[i+1];
        m[s]++;
    }
    for(int i=0;i<b.length()-1;i++)
    {
        string s="";
        s+=b[i];
        s+=b[i+1];
        if(m[s]>=1)
        {   
            ans=s;
            return true;
        }
        
    }
    return false;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
     string a,b;
     cin>>a;
     cin>>b;
     if(a[0]==b[0])
     {
        cout<<"yes"<<endl;
        cout<<a[0]<<"*"<<endl;
     }
     else if(a[a.length()-1]==b[b.length()-1])
     {
          cout<<"yes"<<endl;
          cout<<"*"<<a[a.length()-1]<<endl;
     }
     else if(solve(a,b))
     {
          cout<<"yes"<<endl;
          cout<<"*"<<ans<<"*"<<endl;
     }
     else
     {
        cout<<"no"<<endl;
     } 
    }
    return 0;
    }