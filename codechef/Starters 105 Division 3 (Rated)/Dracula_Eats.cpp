#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int k=n-1;
    int ans=k/7;
    if(k%7!=0)
    {
        ans++;
    }
    cout<<ans<<endl;
}
    return 0;
}