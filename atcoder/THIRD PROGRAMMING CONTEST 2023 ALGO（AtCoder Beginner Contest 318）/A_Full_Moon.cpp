#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m,p;
cin>>n>>m>>p;
n=n-m;
int ans=0;
if(n>=0)
{
 ans++;
}
ans+=(n/p);
cout<<ans<<endl;
    return 0;
}