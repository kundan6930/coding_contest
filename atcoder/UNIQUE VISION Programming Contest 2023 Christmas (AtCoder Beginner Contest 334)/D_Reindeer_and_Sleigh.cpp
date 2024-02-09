#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){

    ll n,q;
    cin>>n>>q;
    vector<ll>a(n),pre(n+1);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    pre[0]=0;
     for (int i = 0; i < n; i++)
    {
        pre[i+1]=pre[i]+a[i];
       // cout<<pre[i+1]<<" "<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<q;i++)
    {
        ll x;
        cin>>x;
       auto it= lower_bound(pre.begin(),pre.end(),x);
        if(it!=pre.end())
        {
            int pos=it-pre.begin();
        //  cout<<pos<<" "<<*it<<endl;
           if(*it==x)
           {
            cout<<pos<<endl;
           }
           else{
            cout<<pos-1<<endl;
           }
        }
        else{
            cout<<n<<endl;
        }
    }


    return 0;
}