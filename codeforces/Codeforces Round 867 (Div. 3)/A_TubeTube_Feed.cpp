#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n,p;
    cin>>n>>p;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int i=0;
    int maxi=0,ans=-1;
    while(i<n && p)
    {
        if(p>=a[i])
        {
            if(b[i]>maxi)
            {
              maxi=b[i];
              ans=i+1;
            }
        }
        p--;
        i++;
    }
    cout<<ans<<endl;

}
    return 0;
}