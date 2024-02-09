#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
      int n,m;
      cin>>n>>m;
      int x1,y1,x2,y2;
      cin>>x1>>y1>>x2>>y2;
      int c1=0,c2=0;
     if(x1==1 || x1==n)
     {
        c1++;
     }
     if(y1==1 || y1==m)
     {
        c1++;
     }
     if(x2==1 || x2==n)
     {
        c2++;
     }
     if(y2==1 || y2==m)
     {
        c2++;
     }
     int k=max(c1,c2);
     cout<<4-k<<endl;
     

        
    }
    return 0;
    }