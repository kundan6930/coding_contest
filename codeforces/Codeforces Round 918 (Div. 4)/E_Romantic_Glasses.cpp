#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
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
    map<ll,ll>mp;
    mp[0]++;
    ll s=0;
    int f=0;
    for(int i=0;i<n;i++)
    {
        
        if(i%2==0)
        {
            s+=a[i];
        }
        else{
            s-=a[i];
        }
        if(mp[s]>0)
        {
           f=1;
           break;  
        }
        mp[s]++;
    }
    if(f==0)
    {
        cout<<"NO"<<endl;
    }
    else{
          cout<<"YES"<<endl;
    }
}
    return 0;
}