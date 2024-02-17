#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,q;
    cin>>n>>q;
  vector<int>a(n),fre(n+1);
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    fre[a[i]]++;
  }
  for(int i=1;i<=n;i++)
  {
    fre[i]+=fre[i-1];
  }
   while(q--)
   {
    int l,r;
    cin>>l>>r;
    int ans=fre[r]-fre[l];
     cout<<ans<<endl;
   }
return 0;

}