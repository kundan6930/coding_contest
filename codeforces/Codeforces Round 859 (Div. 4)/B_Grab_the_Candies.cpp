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
      int o=0,e=0;
      int k;
      for(int i=0;i<n;i++)
      {
        cin>>k;
        if(k%2==0)
        {
            e+=k;
        }
        else{
            o+=k;
        }
      }
        if(o>=e)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        
      }

        
    }
    return 0;
    }