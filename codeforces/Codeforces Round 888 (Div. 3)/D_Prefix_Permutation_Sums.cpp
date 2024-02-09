#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int  main (){
ll t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    vector<ll>a(n-1);
    for(ll i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
   vector<ll>m;
    vector<ll>fre(n+1);
    ll s1=0;
    m.push_back(a[0]);
    if(a[0]<=n)
    {
        fre[a[0]]++;
    }
    if(a[0]>n)
    {
        s1+=a[0];
    }
    for(ll i=1;i<n-1;i++)
    {
        ll p=(a[i]-a[i-1]);
         m.push_back(p);
        if(p>0 && p<=n)
        {
            fre[p]++;
        }
        if(p>n)
        {
        s1+=p;
        }
    }
    ll k1=(n*(n+1))/2;
    if(a[n-2]>k1)
    {
        cout<<"NO"<<endl;
    }
    else if(k1!=a[n-2])
    {
        m.push_back(k1-a[n-2]);
        set<int>st;
        for(int i=0;i<n;i++)
        {
           st.insert(m[i]);
        }
        if(st.size()==n)
        {
           cout<<"YES"<<endl;
        }
        else
        {
             cout<<"NO"<<endl;
        }
    }
    else
    {
    ll rem=0;
    ll c2=0,s2=0,c3=0,f=0,s3=0,p;
   for(int i=1;i<=n;i++)
    {
        if(fre[i]==0)
        {
           rem++;
        }
        if(fre[i]>1)
        {  
          c3++;
          p=fre[i];
          s3+=fre[i]*i;
        }
        if(c3>1 || fre[i]>2)
        {
             f=1;
             break;
        }
        if(fre[i]==1)
        {
           c2++;
           s2+=i;
        }
     }
     //cout<<k1<<" "<<s2<<" "<<s3<<" "<<rem<<" "<<s1<<endl;
     if(f==1)
     {
       cout<<"NO"<<endl; 
     }
    else if(s3>0 && p>2)
    {  
         cout<<"NO"<<endl;
    }
    else if(rem!=2)
    {
         cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    }
     // cout<<k1<<" "<<s1<<" "<<k1-s1<<endl;
    }
    return 0;
}