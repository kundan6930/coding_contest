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
      map<int,int>m;
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        m[a[i]]++;
      }
      int maxi=0;
      for(auto i:m)
      {
        if(i.second>maxi)
        {
            maxi=i.second;
        }
      }
     cout<<n-maxi<<endl;
 

    }
return 0;
}