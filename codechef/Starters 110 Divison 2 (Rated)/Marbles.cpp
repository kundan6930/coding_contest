#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int a,b;
    cin>>a>>b;
    int x=a,y=b;
    int c=0;
    while( x>0 && y>0)
    {
       if(x%y==0)
       {
          break;
       }
       c++;
       x+=1;
       y-=1;
    }
    x=a,y=b;
    int c1=0;
    while( x>=y)
    {
       if(x%y==0)
       {
          break;
       }
       c1++;
       x-=1;
       y+=1;
    }
    if(x>=y)
    {
        cout<<min(c1,c)<<endl;
    }
    else{
        cout<<c<<endl;
    }
    
}
    return 0;
}