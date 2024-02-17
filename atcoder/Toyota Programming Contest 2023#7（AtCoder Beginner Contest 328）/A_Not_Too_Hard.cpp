#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int n,x;
cin>>n>>x;
int s=0;
for(int i=0;i<n;i++)
{
   int p;
   cin>>p;
   if(p<=x)
   {
    s+=p;
   }
  
}
 cout<<s<<endl;
    return 0;
}