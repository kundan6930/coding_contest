#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(vector<ll>a,int n)
{    
      vector<ll>ans,b;
      sort(a.begin(),a.end());
      if(a[0]==a[n-1] || n==2)
      {
        cout<<"-1"<<endl;
        return;
      }
      if(n==3 && a[0]==a[1])
      {
        cout<<a[0]<<" "<<a[2]<<" "<<a[1]<<endl;
        return;
      }
      if(n==3 && a[1]==a[2])
      {
        cout<<a[1]<<" "<<a[0]<<" "<<a[2]<<endl;
        return;
      }
      if(n==3 && (a[1]-a[0])<(a[2]-a[1]))
      {
        cout<<a[1]<<" "<<a[0]<<" "<<a[2]<<endl;
        return;
      }
      if(n==3 && (a[1]-a[0])>=(a[2]-a[1]))
      {
        cout<<a[0]<<" "<<a[2]<<" "<<a[1]<<endl;
        return;
      }
      ll mini=INT_MAX,pos,pos1,f,s;
      for(int i=0;i<n-1;i++)
      {
           if(a[i+1]-a[i]<mini)
           {
             pos=i;
             f=a[i];
             s=a[i+1];
             mini=a[i+1]-a[i];
           }
      }
      for(int i=0;i<n;i++)
      {
           if(a[pos]!=a[i] || a[pos+1]!=a[i+1])
           {
             pos1=i;
             break;
           }
      }
      for(int i=0;i<n;i++)
      {
           if(pos==i || i==pos+1)
           {
             continue;
           }
           else {
            b.push_back(a[i]);
           }
      }
      int j=0;
      for(int i=0;i<n;i++)
      {
           if(i==pos1)
           {
             ans.push_back(a[pos]);
             
           }
           else if( i==pos1+1)
           {
            ans.push_back(a[pos+1]);
           }
           else
           {
               ans.push_back(b[j++]);
           }
      }
      for(int i=0;i<ans.size();i++)
      {
        cout<<ans[i]<<" ";
      }
      cout<<endl;

}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
        int n;
        cin>>n;
      vector<ll>a(n);
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      solve(a,n);
     
    }
    return 0;
}

