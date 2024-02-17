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
      vector<int>b(n);
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      for(int i=0;i<n;i++)
      {
        cin>>b[i];
      }
      int c=0;
      for(int i=0;i<n;i++)
      {
        if(2*min(a[i],b[i])<max(a[i],b[i]))
        {
            continue;
        }
        else{
            c++;
        }
      }
      cout<<c<<endl;


    }
return 0;
}