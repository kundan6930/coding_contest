#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int x,y;
    cin>>x>>y;
    int ans=x+y+abs(x-y)-1;
    cout<<ans<<endl;
}
    return 0;
}