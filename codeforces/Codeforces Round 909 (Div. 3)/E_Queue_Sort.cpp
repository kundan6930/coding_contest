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
    int mini=INT_MAX;
    int k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<mini)
        {
            k=i;
            mini=a[i];
        }
    }
    int f=0;
    for(int i=k;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        cout<<"-1"<<endl;
    }
    else{
        cout<<k<<endl;
    }
}
    return 0;
}