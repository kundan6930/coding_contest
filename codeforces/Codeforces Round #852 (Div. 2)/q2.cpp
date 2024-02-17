#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
      long long x,y;
      cin>>x>>y;
      cout<<2*(x-y)<<endl;
      long long i=y+1;
      while(i<=x)
      {
        cout<<i<<" ";
        i++;
      }
      i=x-1;
      while(i>=y)
      {
        cout<<i<<" ";
        i--;
      }
      cout<<endl;
      


        
    }
    return 0;
    }

