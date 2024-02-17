#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n,x,y,a,b;
    cin>>n>>x>>y>>a>>b;
    int k=min(x,n-x+1);
    int k1=min(y,n-y+1);
    int k2=min(a,n-a+1);
    int k3=min(b,n-b+1);
    int ans=abs(min(k,k1)-min(k2,k3));
    cout<<ans<<endl;
}
    return 0;
}