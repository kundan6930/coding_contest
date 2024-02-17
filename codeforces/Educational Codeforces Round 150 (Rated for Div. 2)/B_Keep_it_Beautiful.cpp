#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k=a[0];
    int ans[n];
    ans[0]=1;
    int p=a[0];
    int i=1;
    while(i<n && a[i-1]<=a[i])
      {
        ans[i]=1;
        p=a[i];
        i++;
      }
      int f=1;
      while(i<n)
      {
       if( f && a[i]<=k && a[i]<=p )
       {
         ans[i]=1;
         p=a[i];
         f=0;
       }
        else  if( a[i]<=k && a[i]>=p)
         {
            ans[i]=1;
            p=a[i];
            //f=1;
         }
         else if( f && a[i]>=p && a[i]>=k)
         {
            ans[i]=1;
            p=a[i];
           // f=0;
         }
         else{
            ans[i]=0;
           // f=0;
         }
       i++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i];
    }
    cout<<endl;

}
    return 0;
}