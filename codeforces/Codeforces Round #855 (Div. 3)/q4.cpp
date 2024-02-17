#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
      ll n;
      cin>>n;
      vector<ll>s(n);
      
      for(int i=0;i<n;i++)
      {
        cin>>s[i]; 
      }
      ll maxi=0;
      ll c=0;
      priority_queue<ll> pq;
      for(int i=0;i<n;i++)
      {
        if(s[i]!=0)
        {
            pq.push(s[i]);
        }
        else
        { 
          if(!pq.empty())
          {
            c+=pq.top();
            pq.pop();
          }
             
      }
      }
        
        cout<<c<<endl;

        
    }
    return 0;
    }