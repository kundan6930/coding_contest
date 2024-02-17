#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
ll t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    ll mini=INT_MAX;
    ll s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2!=0)
        {
            mini=min(mini,a[i]);
        }
        s+=a[i];
    }
    if(s%2!=0)
    {
        cout<<s<<endl;
    }
    else
    {
        if(mini==INT_MAX)
        {
            cout<<"0"<<endl;
        }
        else{
            cout<<s-mini<<endl;
        }
    }
}
    return 0;
}