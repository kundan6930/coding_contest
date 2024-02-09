#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
      int h,x,y;
      cin>>h>>x>>y;
      int c=0;

      h=h-y;
      c++;
      if(h>0)
      {
        c+=(h/x);
        if(h%x!=0)
        {
            c++;
        }
      }
      cout<<c<<endl;
      


    }
return 0;
}