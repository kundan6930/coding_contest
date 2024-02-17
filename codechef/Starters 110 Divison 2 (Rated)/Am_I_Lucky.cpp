#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n,x,k;
    cin>>n>>x>>k;
    int g=n-x;
    int g1=g%k;
    int b1=x%k;
    int mini=min(g1,b1);
    int ans=g1-mini+b1-mini;
    cout<<ans<<endl;
}
    return 0;
}