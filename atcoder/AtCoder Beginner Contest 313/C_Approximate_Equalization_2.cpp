#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<int>a(n);
ll s=0;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    s+=(ll)a[i];
}
ll k=s/n;
ll p=0;
sort(a.begin(),a.end());
ll r=s%n;
int i;
for( i=0;i<n-r;i++)
{
    p+=(ll)(abs(k-a[i]));
}
for( ;i<n;i++)
{
    p+=(ll)(abs((k+1)-a[i]));
}
ll ans=p/2;
cout<<ans<<endl;
    return 0;
}