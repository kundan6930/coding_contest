#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
      int n;
      cin>>n;
      vector<ll>a(n);
      vector<ll>sum(n+1,0);
      ll sum1=0;
     for(int i=0;i<n;i++)
     {
        cin>>a[i];
        sum1+=a[i];
        sum[i+1]=sum[i]+a[i];
     }
     int s=1,e=n,m;
    
     while(s<e)
     {
          m=(s+e)/2;
      //  cout<<s<<" "<<e<<" "<<m<<endl;
        cout<<"?"<<" "<<m-s+1<<" ";
        for(int i=s;i<=m;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        cout.flush();
        int b;
        cin>>b;
      // cout<<b<<" "<<sum[m]-sum[s-1]<<endl;
        if(b>sum[m]-sum[s-1])
        {   
           e=m;
        }
        else
        {
           s=m+1;
        }
     }
     cout<<"!"<<" "<<s<<endl;
     cout.flush();
    }
    return 0;
    }