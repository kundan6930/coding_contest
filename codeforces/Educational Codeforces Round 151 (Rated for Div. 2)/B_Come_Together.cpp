#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int x1,y1,xb,yb,xc,yc;
    cin>>x1>>y1;
    cin>>xb>>yb;
    cin>>xc>>yc;
    int ans=1;
        if(x1>xb && x1>xc)
        {
        ans+=(x1-max(xb,xc));
        }
        else if(x1<xb && x1<xc)
        {
          ans+=(min(xb,xc)-x1);  
        }

        if(y1>yb && y1>yc)
        {
        ans+=(y1-max(yb,yc));
        }
        else if(y1<yb && y1<yc)
         {
          ans+=(min(yb,yc)-y1);  
        }
       cout<<ans<<endl;
    }
    return 0;
}