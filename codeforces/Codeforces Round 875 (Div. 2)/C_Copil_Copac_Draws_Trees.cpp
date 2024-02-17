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
    int a[n-1][2];
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i][0];
        cin>>a[i][1];
    }
    vector<bool>vis(n+1);
    int c=0;
    for(int i=0;i<n-1;i++)
    {
        int u=a[i][0];
        int v=a[i][1];
        if(!vis[u] && !vis[v])
        {
           c++;
           vis[u]=true;
           vis[v]=true;

        }
    }
    cout<<c<<endl;
}
    return 0;
}