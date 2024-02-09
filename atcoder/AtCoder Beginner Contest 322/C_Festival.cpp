#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
vector<int>a(m);

for(int i=0;i<m;i++)
{
 cin>>a[i];
}
for(int i=1;i<=n;i++)
{
   auto it=lower_bound(a.begin(),a.end(),i);
   cout<<*it-i<<endl;
}
    return 0;
}