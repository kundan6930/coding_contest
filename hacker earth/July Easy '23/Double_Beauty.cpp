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
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    int k1=k,s=0,i=0;
    while(i<k1)
    {
        s+=(2*a[i]);
        i++;
    }
    cout<<s<<endl;
}
    return 0;
}