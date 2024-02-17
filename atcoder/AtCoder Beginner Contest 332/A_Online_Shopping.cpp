#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int n,s,k;
cin>>n>>s>>k;
ll s1=0;
for(int i=0;i<n;i++)
{
    int a,b;
    cin>>a>>b;
    s1+=(a*b);
}
if(s1<s)
{
    s1+=k;
}
cout<<s1<<endl;
    return 0;
}