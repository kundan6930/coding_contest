#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    int c1=0,c2=0;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        
        cin>>a[i];
        if(a[i]==a[0])
        {
            c1++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[n-1])
        {
        c2++;
        }
    }
   // cout<<c1<<endl;
    int s=a[0];
    int e=a[n-1];
    if(s==e)
    {
        if(c1>=k)
        {
             cout<<"YES"<<endl;
        }
    else
    {
        cout<<"NO"<<endl;
      }  
    }
    else if(c1<k || c2<k)
    {
       cout<<"NO"<<endl;
    }
    else
    {
    vector<int>pre(n),suf(n);
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            c++;
        }
        pre[i]=c;
    }
     c=0;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==e)
        {
            c++;
        }
        suf[i]=c;
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<suf[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     cout<<pre[i]<<" ";
    // }
    // cout<<endl;
    int f=0;
    for(int i=0;i<n;i++)
    {
        if((pre[i]>=k && suf[i]>=k))
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }
}
    return 0;
}