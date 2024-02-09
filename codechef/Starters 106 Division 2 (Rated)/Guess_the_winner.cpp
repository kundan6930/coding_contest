#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int maxPrimeFactors(int n)
{
    int largest_prime = -1;
    int i = 3;
    while (n % 2 == 0)  
    {  
        n = n/2;  
        largest_prime = i;
    }  
    while (i * i <= n) {
        while (n % i == 0) {
            largest_prime = i;
            n = n / i;
        }
        i = i + 2;
    }
    if (n > 1) {
        largest_prime = n;
    }
    return largest_prime;
}
// void solve(int &c,int  n,int &c1)
//  {
    //  while (n % 2 == 0)  
    // {  
    //     n = n/2;  
    //     c1++;
    // }  
    //  for(int i=3;i*i<=n;i+=2)
    // {
    //       //  cout<<n<<" "<<i<<endl;
          
    //     while(n%i==0)
    //     {
    //         c++;
    //         n/=i;
    //     }
    //    // cout<<i<<" "<<c<<endl;
          
    // }
    // if(n!=1)
    // {
    //   c++;
    // }
//  }
int main (){
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
//int c=0,c1=0;
   // solve(c,n,c1);
    ll k=maxPrimeFactors(n);
//cout<<c<<" "<<c1<<endl; 
int c=n/k;
// if(c!=0)
// {
//   c=2*c*c1;
// }
if(k==2 || k==-1)
{
   cout<<"Bob"<<endl;   
}
   else if(c%2==1 )
    {
        cout<<"Alice"<<endl;
        
    }
    else{
       cout<<"Bob"<<endl;  
    }
   // cout<<c<<endl;
}
    return 0;
}