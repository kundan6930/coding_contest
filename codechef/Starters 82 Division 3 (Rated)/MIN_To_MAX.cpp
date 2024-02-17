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
         int mini=INT_MAX;
       for(int i=0;i<n;i++)
       {
         cin>>a[i]; 
         mini=min(mini,a[i]);
       }
       int c=0;
       for(int i=0;i<n;i++)
       {
        if(a[i]==mini)
        {
            c++;
        }
       }
       cout<<n-c<<endl;

        
    }
    return 0;
    }