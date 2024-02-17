#include <bits/stdc++.h>
using namespace std;

int main (){
    
    int t;
    cin>>t;
    while(t--)
    { 
      int n;
      cin>>n;
      int k;
      vector<vector<int>>ans(n-1,vector<int>(n));
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<n-1;j++)
        {
             cin>>k;
             ans[j][i]=k;
        }
        
      }
      vector<int>ans1(n);
      int count=0;
      int prev;
      unordered_map<int,int>m;
      for(int i=0;i<n;i++)
      {
        m[ans[0][i]]++;
        
      }
      for(auto i:m)
      {
        if(i.second>=2)
        {
            ans1[0]=i.first;
        }
        else
        {
            ans1[1]=i.first;
            prev=ans1[1];
        }
      }
      for(int i=1;i<n-1;i++)
      {
        for(int j=0;j<n;j++)
        {
           if(ans[i][j]!=prev)
           {    
               prev=ans[i][j];
               ans1[i+1]=prev;
               break;
           }
        }
     }
     for(int i=0;i<n;i++)
     {
        cout<<ans1[i]<<" "<<endl;
     }
    }
    return 0;
}