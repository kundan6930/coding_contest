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
    int n;
    cin>>n;
    vector<int>a(n);
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        maxi=max(maxi,a[i]);
    }
    int mini=INT_MAX;
    for(int i=2;i<=maxi;i++)
    {
        int s=0;
        for(int j=0;j<n;j++)
        {
           int k=a[j]%i;
           s+=((i-k)%i);
        }
        mini=min(mini,s);
    }
    cout<<mini<<endl;
}
    return 0;
}