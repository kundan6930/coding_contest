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
    ll n,k;
    cin>>n>>k;
    ll a=n/2;
    ll s=a+n;
    if(k<s)
    {
        cout<<"-1"<<endl;
    }
    else if(a%2==0)
    {
        if(k%2!=0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
              for(int i=0;i<a;i++)
              {
                cout<<"1"<<" ";
              }
              ll c1=(k-a);
              ll c2=c1-(2*(a-1));
              for(int i=0;i<a-1;i++)
              {
                cout<<"2"<<" ";
              }
              cout<<c2<<endl;
        }
    }
    else 
    {
        if(k%2==0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            for(int i=0;i<a;i++)
              {
                cout<<"1"<<" ";
              }
              ll c1=(k-a);
              ll c2=c1-(2*(a-1));
              for(int i=0;i<a-1;i++)
              {
                cout<<"2"<<" ";
              }
              cout<<c2<<endl;
        }
    }
    
}
    return 0;
}