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
    ll mini=LLONG_MAX;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        mini=min(mini,a[i]);
    }
    ll s=0;
    for(ll i=0;i<n;i++)
    {
        a[i]-=mini;
        s+=a[i];
    }
    if(s==0)
    {
        if(mini%2!=0)
        {
            cout<<"CHEF"<<endl;
        }
        else
        {
         cout<<"CHEFINA"<<endl;
        }
    }
    else
    {
        if(mini%2!=0)
        {  
            if(s%2!=0)
            {
            cout<<"CHEFINA"<<endl;
            }
            else{
                cout<<"CHEF"<<endl;
            }
        }
        else{
            if(s%2!=0)
            {
            cout<<"CHEF"<<endl;
            }
            else{
                cout<<"CHEFINA"<<endl;
            }
        } 
    }

}
    return 0;
}