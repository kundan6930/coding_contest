#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
string s;
cin>>s;
vector<int>a(n);
vector<string>b(m+1);
vector<vector<int>>ab(m+1);
for(int i=0;i<n;i++)
{
    cin>>a[i];
    b[a[i]].push_back(s[i]);
    ab[a[i]].push_back(i);
} 
vector<char>ans(n);
for(int i=1;i<=m;i++)
{
   int k=b[i].length();
   char l=b[i][k-1];
   for(int j=k-1;j>=1;j--)
   {
      int k1=(j-1+k)%k;
      b[i][j]=b[i][k1];
     // cout<<b[i][j]<<" "<<k1<<" "<<k<<endl;
   }
   b[i][0]=l;
}
for(int i=1;i<=m;i++)
{
    for(int j=0;j<b[i].length();j++)
    {
      ans[ab[i][j]]=b[i][j];
    } 
}
for(int i=0;i<n;i++)
{
    cout<<ans[i];
}
cout<<endl;
    return 0;
}