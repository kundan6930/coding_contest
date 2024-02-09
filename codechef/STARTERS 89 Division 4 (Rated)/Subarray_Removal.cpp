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
    ll s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    int b[n+1];
    for(int i=0;i<n;i++)
    {
        b[a[i]]=i;  
    }
    int i=n;
    while(i>1)
    {
        
    }

}
    return 0;
}