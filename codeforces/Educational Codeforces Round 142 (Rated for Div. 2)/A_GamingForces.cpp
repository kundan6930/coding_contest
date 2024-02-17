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
    vector<int>a(n);
    int o=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            o++;
        }
    }
    int ans=0;
    ans+=(o/2);
    if(o%2!=0)
    {
       ans+=1;
    }
    ans+=(n-o);
    cout<<ans<<endl;
}
    return 0;
}