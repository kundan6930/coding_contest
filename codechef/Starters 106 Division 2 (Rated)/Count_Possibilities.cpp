#include<bits/stdc++.h>
using namespace std;
 
#define pfin(a) printf("%d\n",a);
#define pfln(a) printf("%lld\n",a);
#define pfis(a) printf("%d ",a);
#define pfls(a) printf("%lld ",a);
#define sfi(a) scanf("%d",&a);
#define sfl(a) scanf("%lld",&a);
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define f(i,a,b) for(int i=a;i<b;i++)
#define pb(a) push_back(a);
#define mp(a,b) make_pair(a,b)
#define ll long long
#define F first
#define S second
#define vi vector<int>
#define vc vector<char>
 
vi g[21];
 
int n;
ll cnt=0;
int all_visited;
 
ll dp[(1<<21)];
 
ll rec(int mask,vi ind)
{
    if(dp[mask]!=-1)
        return dp[mask];
    if(mask==all_visited)
        return dp[mask]=1;
 
    ll ans=0;
 
    f(i,0,n)
    {
        if((ind[i]==0) && ((mask&(1<<i))==0))
        {
            vi temp(ind);
 
            f(j,0,g[i].size())
            {
                int v=g[i][j];
                temp[v]--;
            }
            ans=ans+rec((mask|(1<<i)),temp);
           // cout<<ans<<endl;
        }
    }
 cout<<ans<<endl;
    return dp[mask]=ans;
}

 

int main()
{
    int t;
 cin>>t;
 while(t--)
 {
    
    sfi(n)
  //  sfi(m)
 int m=n-1;
    vi ind(n);
 
    memset(dp,-1,sizeof(dp));
 
    all_visited=(1<<n)-1;
 
    f(i,0,n)
        ind[i]=0;
 
    while(m--)
    {
        int u,v;
        sfi(u)
        sfi(v)
        u--;
        v--;
        g[u].pb(v)
        ind[v]++;
    }
    
 
    ll ans=rec(0,ind);
 
    pfln(ans);
 }
    return 0;
}
