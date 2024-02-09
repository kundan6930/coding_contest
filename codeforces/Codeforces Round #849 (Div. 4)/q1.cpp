#include <bits/stdc++.h>
using namespace std;

int main ()
{ string s="codeforces";
    int t;
    cin>>t;
    while(t--)
    { 
     char c;
     cin>>c;
     int f=0;
     for(int i=0;i<s.length();i++)
     {
        if(s[i]==c)
        {
        f=1;
        break;
        }
     }
     if(f==1)
     {
        cout<<"yes"<<endl;
     }
     else{
        cout<<"no"<<endl;
     }


        
    }
    return 0;
    }