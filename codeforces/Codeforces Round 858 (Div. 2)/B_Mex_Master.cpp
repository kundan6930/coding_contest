#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
      int n;
      cin>>n;
      vector<int>a(n);
      int z=0,o=0,ot=0;
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        if(a[i]==0)
        {
            z++;
        }
        else if(a[i]==1)
        {
            o++;
        }
        else{
         ot++;
        }
      }
      int nz=n-z;
      if(z<=nz+1)
      {
        cout<<"0"<<endl;
      }
      else if(ot!=0 || o==0)
      {
        cout<<"1"<<endl;
      }
      else if(ot==0)
      {
        cout<<"2"<<endl;
      }


        
    }
    return 0;
    }