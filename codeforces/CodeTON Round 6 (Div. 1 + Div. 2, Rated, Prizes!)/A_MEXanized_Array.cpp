#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int n,k,x;
    cin>>n>>k>>x;
    if(k>n || k>x+1)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        int p=x;
        if(k==x)
        {
           p=x-1;
        }
       int ans=k*(k-1)/2;
       ans+=(n-k)*(p);
       cout<<ans<<endl;
    }
}
    return 0;
}