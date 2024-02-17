#include <bits/stdc++.h>
using namespace std;
int solve(int n, int val)
{
    if (n < 10) {
        val = val + n;
        return val;
    }
    return solve(n / 10, (n % 10) + val);
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
     int n;
     cin>>n;
     int a=n/2;
     int b=n-(n/2);
     int s1=solve(a,0);
     int s2=solve(b,0);
     while(abs(s1-s2)>1)
     {
     
        
           int k=abs(s1-s2)/2;
           if(b>a)
           {
             b+=k;
             a-=k;
           }
           else{
              b-=k;
              a+=k;
           }
        s1=solve(a,0);
        s2=solve(b,0);
        
     }
     cout<<a<<" "<<b<<endl;

        
    }
    return 0;
    }