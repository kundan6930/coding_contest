#include <bits/stdc++.h>
using namespace std;

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
      int c=0,s=0,c1=0,maxi=0;
      for(int i=0;i<n;i++)
      {
         if(a[i]==1)
         {
            c++;
            c1++;
            maxi=max(maxi,s+c1);
         }
         else
         {
            if(c!=0)
            {
              s=c/2+1;
               
            }
            c1=0;
         }
      }
      cout<<maxi<<endl;


        
    }
    return 0;
    }