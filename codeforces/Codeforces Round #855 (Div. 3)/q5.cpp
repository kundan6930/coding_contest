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
      string s;
      cin>>s;
      int c=0;
      for(int i=0;i<n-2;i++)
      {
        if(s[i]==s[i+2])
        {
            c++;
        }
     }
     cout<<n-c-1<<endl;
     }
    return 0;
    }