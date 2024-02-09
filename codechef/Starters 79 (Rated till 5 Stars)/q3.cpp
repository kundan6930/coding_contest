#include <bits/stdc++.h>
using namespace std;
int solve(int n)
{
    
    if (n % 2 == 0)
    {
        return 2;
    }
 
    
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
        {
            return i;
        }
    }
 
    return n;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 

     int x,y,c=0;
     cin>>x>>y;
     while(x<=y)
     {
        int a=solve(x);
        if(x+a<=y)
        {
            
            c++;
        }
        x+=a;
     }
     cout<<c<<endl;
        
    }
    return 0;
    }
    