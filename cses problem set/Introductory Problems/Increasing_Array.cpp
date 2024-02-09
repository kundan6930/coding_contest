#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
ll n;
cin>>n;
vector<ll>a(n);
for(int i=0;i<n;i++)
{
  cin>>a[i];
} 
ll move=0;
for(int i=0;i<n-1;i++)
{
    if(a[i+1]<a[i])
    {
       move+=(a[i]-a[i+1]);
       a[i+1]=a[i];
    }
}
cout<<move<<endl;

    return 0;
}