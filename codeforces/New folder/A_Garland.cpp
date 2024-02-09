#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
     string s;
     cin>>s;
     map<char,int>m;
     for(int i=0;i<s.length();i++)
     {
             m[s[i]]++;
     }
     int k=m.size(),f=0;
     if(k==1)
     {
        cout<<"-1"<<endl;
     }
     else if( k==3 || k==4)
     {
        cout<<"4"<<endl;
     }
     else 
     {
        for(auto i:m)
        {
            if(i.second==3)
            {
                  f=1;
                  break;
            }
        }
        if(f==1)
        {
          cout<<"6"<<endl;
        }
        else{
        cout<<"4"<<endl;
        }
        
     }


        
    }
    return 0;
    }