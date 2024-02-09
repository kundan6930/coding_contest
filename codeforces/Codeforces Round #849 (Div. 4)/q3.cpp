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
        int i=0,j=n-1,c=0;
        while(i<j)
        {
          if(s[i]^s[j])
          {
             c+=2;
             i++;
             j--;
          }
          else
          {
            break;
           }
        }

    cout<<n-c<<endl;

        
    }
    return 0;
    }
