#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n,m,k;
    cin>>n>>m>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int f=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]+k-1>m)
        {
           f=1;
           break;
        }
    }
    if(f==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
       cout<<"No"<<endl; 
    }
}
    return 0;
}