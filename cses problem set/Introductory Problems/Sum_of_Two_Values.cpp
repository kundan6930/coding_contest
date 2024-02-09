#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  int n, x;
  cin >> n >> x;
  vector<ll> b(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> b[i]; 
  }
  map<int,int>m;
  int f=0;
  for(int i=0;i<n;i++)
  {
     if(m.find(x-b[i])!=m.end())
     {
       f=1;
       cout<<i+1<<" "<<m[x-b[i]]+1<<endl;
       break;
     }
     else
     {
            m[b[i]]=i;
     }
  }
  if(f==0)
  {
    cout<<"IMPOSSIBLE"<<endl;
  }
  

  return 0;
}