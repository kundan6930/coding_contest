#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
ll s=0;
ll maxi=LLONG_MIN;
for(int i=0;i<n;i++)
{
    s+=a[i];
    maxi=max(maxi,s);
    //cout<<maxi<<endl;
    if(s<0)
    {
        s=0;
    }
}
cout<<maxi<<endl;

    return 0;
}