#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=0,o=0;
    while(i<k-1)
    {
        if(a[i]%2!=0)
        {
            o++;
        }
        i++;
    }
    int ans=0;
    for(;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            o++;
        }
        if(o>0)
        {
          ans++;
        }
        if(a[i-(k-1)]%2!=0)
        {
            o--;
        }
    }
    cout<<ans<<endl;
}
    return 0;
}