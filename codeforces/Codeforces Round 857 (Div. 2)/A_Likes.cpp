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
      int pos=0,neg=0;

      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        if(a[i]>0)
        {
            pos++;
        }
        else if(a[i]<0)
        {
            neg++;
        }
      }
      int k=0;
      for(int i=1;i<=pos;i++)
      {
        cout<<i<<" ";
         k++;
      }
      int i=k-1;
      while(k<n)
      {
         cout<<i<<" ";
         i--;
         k++;
      }
      cout<<endl;
      k=0;
      for(int i=1;i<=neg;i++)
      {
        cout<<"1"<<" "<<"0"<<" ";
        k+=2;
      }
      i=1;
      while(k<n)
      {
         cout<<i<<" ";
         i++;
         k++;
      }
      cout<<endl;

        
    }
    return 0;
    }