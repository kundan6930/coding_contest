#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define MAX 100005

vector<int> v[MAX];
ll a[MAX],ans[MAX];

void dfs(int node,int parent)
{
    ans[node]=a[node];
    for(auto child:v[node])
    {
        if(child!=parent)
        {
            dfs(child,node);
            ans[node]+=ans[child];
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,q;
    cin>>n;

    for(int i=1;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }

    for(int i=1;i<=n;i++)
        cin>>a[i];

    dfs(1,-1);

    cin>>q;

    while(q--)
    {
        int type,u,p;
        cin>>type>>u;

        if(type==1)
            cout<<ans[u]<<endl;
        else
        {
            cin>>p;
            a[u]^=p;
            dfs(u,-1);
        }
    }

    return 0;
}
