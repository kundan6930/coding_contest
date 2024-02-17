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
      int x=n/2;
      while(x)
      {
        cout<<x<<" ";
        x--;
      }
      int y=(n/2)+1;
      while(y<=n)
      {
        cout<<y<<" ";
        y++;
      }
      cout<<endl;


        
    }
    return 0;
    }
    
