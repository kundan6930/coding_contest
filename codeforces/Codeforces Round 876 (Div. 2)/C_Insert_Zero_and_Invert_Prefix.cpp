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
   int f=0,c=0;
   vector<int>ans(n);
   for(int i=n-1;i>0;i--)
   {
     if(a[n-1])
     {
        f=1;
        break;
     }
         if( c%2==0)
         {
            if(a[i-1]==1)
            {
                ans[i]=i;
                c++;
            }
            else
            {
              ans[i]=0;
            }
         }
         else{
             if(a[i-1]==0)
            {
               ans[i]=i;
                c++;
            }
            else
            {
              ans[i]=0;
            }
         }
   }
   if(f==1)
   {
     cout<<"NO"<<endl;
   }
   else if(a[0]==1 && c%2==0)
   {
     cout<<"NO"<<endl;
   }
   else if(a[0]==0 && c%2!=0)
   {
     cout<<"NO"<<endl;
   }
   else{
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
   }
}
    return 0;
}