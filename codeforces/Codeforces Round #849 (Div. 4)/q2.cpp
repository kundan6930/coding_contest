#include <bits/stdc++.h>
using namespace std;

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
        int x=0,y=0,f=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                x-=1;
            }
            else if(s[i]=='R')
            {
                x+=1;
            }
            else if(s[i]=='U')
            {
                y+=1;
            }
            else if(s[i]=='D')
            {
                y-=1;
            }
            if(x==1 && y==1)
          {
              f=1;
              break;
         }
        }
  if(f==1)
  {
    cout<<"yes"<<endl;
  }
  else
  {
    cout<<"no"<<endl;
  }
 


        
    }
    return 0;
    }