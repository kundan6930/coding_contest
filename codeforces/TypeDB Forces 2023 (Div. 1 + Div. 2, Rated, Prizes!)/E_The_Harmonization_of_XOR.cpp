#include <bits/stdc++.h>
using namespace std;
using ll =long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
      ll n,k,x;
      cin>>n>>k>>x;
      ll c=0;
      vector<bool>vis(n+1,false);
      vector<vector<ll>>ans,ans1;
      for(int i=1;i<=n;i++)
      {
           ll xo=i^x;
           if(i==x && xo==0)
           {
             ans.push_back({i});
             vis[i]=true;
             c++;
           }
           else if(xo<=n && !vis[xo] && !vis[i])
           {
              c++;
              ans.push_back({i,xo});
              vis[xo]=true;
              vis[i]=true;
           }
      }
      ll sum1=0;
      vector<ll>rest;
      for(int i=1;i<=n;i++)
      {
        if(!vis[i])
        {
            rest.push_back(i);
            sum1^=i;
        }
      }
      //cout<<c<<" "<<k<<endl;
      if(c<k)
      {
        cout<<"NO"<<endl;
      }
      else if((c-k+1)%2==0 || sum1!=0 )
      {
         cout<<"NO"<<endl;
      }
      else
      {
         cout<<"YES"<<endl;
         ll size=c-k+1;
         int p=0;
         vector<ll>ans2;
         for(int i=0;i<size;i++)
         {   
            for(int j=0;j<ans[i].size();j++)
            {
             ans2.push_back(ans[i][j]);
            }
         }
         if(sum1==0)
         {
           for(int i=0;i<rest.size();i++)
           {
              ans2.push_back(rest[i]);
           }
         }
         ans1.push_back(ans2);
         for(int i=size;i<ans.size();i++)
         {   
            ans1.push_back(ans[i]);
         }
         for(int i=0;i<ans1.size();i++)
         {   
            cout<<ans1[i].size()<<" ";
            for(int j=0;j<ans1[i].size();j++)
            {
                cout<<ans1[i][j]<<" ";
            }
            cout<<endl;
         }
      }
     


        
    }
    return 0;
    }