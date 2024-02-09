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
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int k=a[i]%b[i];
        int k1=a[i]/b[i];
        if(k!=0)
        {
            k1++;
        }
        ans=max(ans,k1);
    }
    cout<<ans<<endl;
}
    return 0;
}