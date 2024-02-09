#include <bits/stdc++.h>
using namespace std;
using ll=long long;
     int n,maxi;
     int solve(vector<int> &a,int pos)
     {
        if(pos==n-1) 
        {
            return 0;
        }
        int maxi=0;
         for(int i=pos;i<n;i++)
         {
              swap(a[pos],a[i]);
              maxi=max(maxi,solve(a,pos+1)+(__gcd(a[pos],a[i])));
              swap(a[pos],a[i]);
         }
         return maxi;
     }
int main ()
{
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    maxi=0;
    
    cout<<solve(a,0)<<endl;
    return 0;
}