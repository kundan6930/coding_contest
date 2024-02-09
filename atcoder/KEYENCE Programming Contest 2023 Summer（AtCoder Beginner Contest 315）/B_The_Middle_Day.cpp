#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int m;
cin>>m;
vector<int>a(m);
int s=0;
for(int i=0;i<m;i++)
{
 cin>>a[i];
 s+=a[i];
}
int k=(s+1)/2;
int m1,d1;
for(int i=0;i<m;i++)
{
   if(k<=a[i])
   {
      m1=i+1;
      d1=k;
      break;
   }
   else
   {
    k-=a[i];
   }
  // cout<<k<<" "<<i<<endl;
}
cout<<m1<<" "<<d1<<endl;
    return 0;
}