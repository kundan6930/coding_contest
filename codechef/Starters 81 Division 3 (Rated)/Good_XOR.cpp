#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(vector<int>a,int n)
{    
    int o=0,z=0;
    for(int i=0;i<n;i++)
    {
         if(a[i]==0)
         {
            z++;
         }
         else{
            o++;
         }
    }
      if(n%2!=0 ||z==n || (o==2 && z==0))
      {
        cout<<"-1"<<endl;
        return;
      }
      if(z==o)
      {
        cout<<"0"<<endl;
        return;
      }
      if(z>o)
      {
         cout<<(z-o)/2<<endl;
         return;
      }
      if(o>z)
      {
        int k=(o-z)/2;
        if(k%2==0)
        {
          cout<<k/2<<endl;  
        }
        else{
            //if(k+1/2==1)
         //   {
         //        cout<<"1"<<endl;  
         //   }
          //  else
           // {
            cout<<k/2+2<<endl;  
          //  }
        }
      }
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
        int n;
        cin>>n;
      vector<int>a(n);
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      solve(a,n);
     
    }
    return 0;
}

