// 14
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int solve(int n,int m)
{
   if(n==0 || m==1)
   {
    return 1;
   }
   if(m>n)
   {
    return solve(n,n);
   }
   return solve(n,m-1)+solve(n-m,m);
}
int main (){
int t;
cin>>t;
while(t--)
{
    int n,m;
    cin>>n>>m;
    cout<<solve(n,m)<<endl;
}
    return 0;
}