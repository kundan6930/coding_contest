#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    map<int,int>m;
  ll  maxi=0;
    for(int i=0;i<n;i++)
    {
         cin>>a[i];
         m[a[i]]++;
         maxi=max(maxi,a[i]);
    }
    sort(a.begin(),a.end());
     for(int i=0;i<n;i++)
    {cout<<a[i]<<" ";
    }
    cout<<endl;
  //  int maxi=a[n-1];
    vector<int>b(maxi+1),c(maxi+1),d(maxi+1);
   
        for(int i=0;i<n;i++)
        {
            b[a[i]]++;
         }
         for(int i=0;i<b.size();i++)
         {
            cout<<b[i]<<" ";
         }
         cout<<endl;
         for(auto i:m ) 
         {
            int c1=0;
            for(int j=i.first;j<=maxi;j+=i.first)
            {
               if( b[j]>0)
               {
                // c1++;
                 c[i.first]+=b[j];
                 d[j]++;
               }
            }
            // if(c1>0)
            // {
            //     c[a[i]]=1;
            // }
         }
          for(int i=0;i<c.size();i++)
         {
            cout<<c[i]<<" ";
         }
         cout<<endl;  
    
          for(int i=0;i<d.size();i++)
         {
            cout<<d[i]<<" ";
         }
         cout<<endl;  
    
    int c1=0,ans=0,c2=0;
    for(auto i:m) 
    {
        int k1=i.second;
        if(d[i.first]==1)
        {
            ans+=k1*(n-c[i.first]);
        }
            
        // else
        // {
        //     ans+=k1*c2;
        //     c1+=k1; 
        // }
        
    }
    cout<<ans<<endl;
    }
    return 0;
}