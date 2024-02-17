#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
ll n,m;
cin>>n>>m;
vector<ll>a(n);
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
sort(a.begin(),a.end());
int maxi=0;
for(int i=0;i<n;i++)
{
    auto it=lower_bound(a.begin(),a.end(),a[i]+m);
    int k1=it-a.begin();
     maxi=max(maxi,k1-i);
}
cout<<maxi<<endl;

    return 0;
}