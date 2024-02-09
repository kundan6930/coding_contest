#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>ans1;
void solve(int &n,int k,int &s,int pos,vector<vector<int>>&st)
{
    if(pos==n+1)
    {
      if(k==0)
      {
        ans1=st;
        return; 
      }
      }
    if(k<0)
    {
        return ;
    }
    int c=0;
    vector<int>v;
    
    for(int i=1;i<=n;i++)
    {  
        if(pos==i) 
        {
            continue;
        }
        v.push_back(i);
        c=c^i;
        if(c==s)
        {   st.push_back(v);
           // v.push_back(0);
           cout<<pos <<" "<<i<<" "<<k<< " "<<st.size()<<endl;
           solve(n,k-1,s,i,st);
           st.pop_back();
        }
        
    }
    return ;
}
int main ()
{   
    int t;
    cin>>t;
    while(t--)
    { 
      int n,k,s;
      cin>>n>>k>>s;
      vector<vector<int>>st;
      
      solve(n,k,s,1,st);
      cout<<ans1.size();
      if(ans1.size()==k)
      {
        cout<<"YES"<<endl;
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
      else
      {
        cout<<"NO"<<endl;
      }


        
    }
    return 0;
    }