#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,x;
cin>>n>>x;
vector<int>a(n-1);
int s=0;
for(int i=0;i<n-1;i++)
{
    cin>>a[i];
    s+=a[i];
}
sort(a.begin(),a.end());
s-=a[0];
s-=a[n-2];
if(s+a[0]>=x)
{
    cout<<"0"<<endl;
}
else if(s+a[n-2]<x)
{
   cout<<"-1"<<endl;
}
else
{
    int k=x-s;
    cout<<k<<endl;
}
    return 0;
}