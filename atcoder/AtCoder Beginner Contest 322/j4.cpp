#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
  ll n ,k;
  cin>>n>>k;
  vector<int>a(n);
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  vector<int>b;
  b.push_back(0);
  for(int i=0;i<n-1;i++)
  {
      if(a[i]-a[i+1]<(-k) && a[i]-a[i+1]>k)
      {
        b.push_back(i);
      }
  }
  b.push_back(n-1);
  for(int i=0;i<b.size();i++)
  {
     cout<<b[i]<<" ";
  }
  cout<<endl;
  int maxi=-1;
  int s=-1,e=-1;
  for(int i=0;i<(int)b.size()-1;i++)
  {
        if((b[i+1]-b[i]+1)>maxi)
        {
           s=i;
           e=i+1;
           maxi=(b[i+1]-b[i]+1);
        }
  }
  cout<<s+1<<" "<<e+1<<endl;
}
    return 0;
}