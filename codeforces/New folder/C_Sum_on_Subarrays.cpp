#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
     int n,k;
     cin>>n>>k;
     //int t=(n*(n+1))/2;
     //int p=t-k;
      int a=sqrt(2*k);
      // a+=1;
      if((a*(a+1))/2<=k)
      {
        a=a;
      }
      else 
      {
        a=a-1;
      }
     // vector<int>pre;
     //cout<<a<<endl;
      int s=0,c=0;
     for(int i=1;i<=a;i++)
     {
        cout<<i+1<<" ";
        s+=(i+1);
       //pre.push_back(s);
        c++;
     }
     int l=(a*(a+1))/2;
     int p=k-l;
     if(p!=0)
     {
     int p1=(p*(p+1))/2;
     cout<<-(s-p1)<<" ";
     c++;
     }
     for(int i=0;i<n-c;i++)
     {
      cout<<-(s+1)<<" ";
      s=s+1;
     }
     cout<<endl;
    }  
    
    return 0;
    }