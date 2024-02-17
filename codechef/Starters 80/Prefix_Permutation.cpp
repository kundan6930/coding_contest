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
      if(n%2!=0)
      {
        cout<<"-1"<<endl;
      }
      else
      {
         cout<<"1"<<" ";
         for(int i=2;i<=n;)
         {
            cout<<i<<" ";
            i+=2;
         }
         for(int i=3;i<=n;)
         {
              cout<<i<<" ";
              i+=2;
         }
         cout<<endl;
      }
      

    }
    return 0;
}