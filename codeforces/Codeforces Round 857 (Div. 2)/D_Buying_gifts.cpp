#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
       int n;
       cin>>n;
       vector<vector<int>>a(n,vector<int>(2));
       vector<int>ans(n);
       for(int i=0;i<n;i++)
       {
        cin>>a[i][0];
        cin>>a[i][1];
        ans[i]=(min(a[i][1],a[i][0]));
        //cout<<min(a[i][1],a[i][0])<<endl;
       }
       sort(ans.begin(),ans.end());
     /*  for(int i=0;i<n;i++)
       {
        cout<<ans[i]<<" ";
       }
       cout<<endl;*/
       cout<<ans[n-1]-ans[n-2]<<" "<<endl;
    }
    return 0;
    }