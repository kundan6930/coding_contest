#include <bits/stdc++.h>
using namespace std;
using ll=long long;
long long gcd(long long int a, long long int b)
{
  if (b == 0)
  {
    return a;
  }
  return gcd(b, a % b);
}
 
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
         ll a,b,c,d;
         cin>>a>>b>>c>>d;
         if(a%b+1<b && c%d+1<d) 
         {
            cout<<"1"<<endl;
         }
         else
         {
            ll k=lcm(b,d);
            cout<<k-(a%b)<<endl;;

         }


        
    }
    return 0;
    }