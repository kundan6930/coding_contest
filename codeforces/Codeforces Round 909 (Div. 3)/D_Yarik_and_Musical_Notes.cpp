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
    vector<ll>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll res=0;
    map<double,ll>map1;
    for(int i=0;i<n;i++)
    {
            double ll1=log2((double)arr[i]);
             double kk1=(double)arr[i]-ll1;
            if(map1[kk1]>0)
            {
                res+=map1[kk1];
            }
        map1[kk1]++;
    }
    cout<<res<<endl;
}
    return 0;
}