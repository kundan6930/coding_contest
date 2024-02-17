#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int solve(int a1, int b1, int d) 
{
    int e;
   if((b1 - a1) % d)
  {
    e=0;
  }
  else{
    e=1;
  };

  int ans=(b1 - a1) / d + 1 - e;
  return ans;
}
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    ll n,m,d;
    cin>>n>>m>>d;
    vector<int>a(m);
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
vector<int>b;
 int s = 0;
 if (a[0] != 1) 
 {
     s = 1;
     b.push_back(1);
 }
 for(int i=0;i<n;i++)
 {
    b.push_back(a[i]);
 }
 b.push_back(n + 1);
int  n1 = b.size();
 int ans = 0;
for (int i = 1; i < n1; ++i) 
{
 ans += solve(b[i-1], b[i], d);
 }
int a2 = ans;
int ans1 = ans;
 for (int i = 1; i < n1-1; ++i) 
 {
 int curr = solve(b[i-1], b[i+1], d) - solve(b[i-1], b[i], d) - solve(b[i], b[i+1], d);
 ans1 = a2 + curr;
 ans = min(ans, ans1);
}
 int cnt = 0;
 for (int i = 1; i < n1 - 1; ++i) 
 {
   int curr1=solve(b[i-1], b[i+1], d);
   int curr2=solve(b[i-1], b[i], d) ;
   int curr3=solve(b[i], b[i+1], d);
   int curr=curr1-curr2-curr3;
    ans1 = a2 + curr;
if (ans1 == ans) 
{
    cnt += 1;
 }
 }
if (ans == a2 && s== 0) 
{
  cnt += 1;
 }
 cout << ans << " " << cnt << endl;
}

 return 0;
}

