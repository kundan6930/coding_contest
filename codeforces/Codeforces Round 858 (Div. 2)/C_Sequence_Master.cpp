#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll solve(vector<int>a,int m,int n)
{
     ll s=0;
    for(int i=0;i<n;i++)
    {
       s+=abs(a[i]-m);
    }
    return s;
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
      int mini=INT_MAX;
      int maxi=INT_MIN;
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        if(a[i]<mini)
        {
            mini=a[i];
        }
        if(a[i]>maxi)
        {
            maxi=a[i];
        }
      }
      int s=mini;
      int e=maxi;
      while(s<=e)
      {
        int m=(s+e)/2;

      }


        
    }
    return 0;
    }