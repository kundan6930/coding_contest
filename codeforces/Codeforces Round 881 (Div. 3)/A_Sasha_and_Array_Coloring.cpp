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
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int i=0,j=n-1,s=0;
    while(i<j)
    {
        s+=(a[j]-a[i]);
        i++;
        j--;
    }
    cout<<s<<endl;
}
    return 0;
}