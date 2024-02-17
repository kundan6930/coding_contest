#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
   int n,m,k,h;
   cin>>n>>m>>k>>h;
   vector<int>a(n) ;
   int c=0;
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
    int k1=abs(h-a[i]);
    int p=k1/k;
     if(k1%k==0 && p<m && p!=0)
     {
        //cout<<a[i]<<" ";
        c++;
     }
   }
  // cout<<endl;
   cout<<c<<endl;
}
    return 0;
}