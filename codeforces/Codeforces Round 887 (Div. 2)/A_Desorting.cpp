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
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int mini=INT_MAX;
    for(int i=0;i<n-1;i++)
    {
        mini=min(mini,a[i+1]-a[i]);
    }
    if(mini<0)
    {
        cout<<"0"<<endl;
    }
    else
    {
       int ans=mini/2;
       ans+=1;
       cout<<ans<<endl;
    }
}
    return 0;
}