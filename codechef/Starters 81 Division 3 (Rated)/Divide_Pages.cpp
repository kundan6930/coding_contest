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
      int o=0,e=0;
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        if(a[i]%2==0)
        {
            e++;
        }
        else{
            o++;
        }
      }
        if(e%2==0 && o%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if(e%2==0 && o%2!=0)
        {
              cout<<"NO"<<endl;
        }
        else if(e%2!=0 && o%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if(e%2!=0 && o%2!=0)
        {
            cout<<"NO"<<endl;
        }

       
    }
    return 0;
}