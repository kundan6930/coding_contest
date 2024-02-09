#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(vector<int>&b,int a)
{
    for(int i=2;i*i<=a;i++)
    {
        while(a%i==0)
        {
            b[i]++;
            b[i]%=3;
            a/=i;
        }
    }
    if(a!=1)
    {
        b[a]++;
        b[a]%=3;
    }
}
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
vector<int>b(101,0);
ll ans=0;
map<vector<int>,int>m;
m[b]++;
for(int i=0;i<n;i++)
{
    solve(b,a[i]);
    ans+=m[b];
    m[b]++;
  //  cout<<ans<<" "<<i<<endl;
}
cout<<ans<<endl;
    return 0;
}