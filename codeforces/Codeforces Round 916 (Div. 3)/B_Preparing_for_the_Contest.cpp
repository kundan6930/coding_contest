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
    for(int i=n;i>k+1;i--)
    {
        cout<<i<<" ";
    }
    for(int i=1;i<k+2;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
    return 0;
}