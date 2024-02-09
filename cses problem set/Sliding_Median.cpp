#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,k;
cin>>n>>k;
vector<int>a(n);
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
multiset<int>s(a.begin(),a.begin()+k);
int k1=k/2;
if(k%2==0)
{
  k1--;
}
auto mid=next(s.begin(),k1);
int i=k;
vector<int>ans;
while(i<n)
{
    ans.push_back(*mid);
    s.insert(a[i]);
    if(a[i]<*mid)
    {
        mid--;
    }
    if(a[i-k]<=*mid)
    {
         mid++;
    }
    s.erase(s.lower_bound(a[i-k]));
    i++;
}
   ans.push_back(*mid);
for(int i=0;i<(int)ans.size();i++)
{
    cout<<ans[i]<<" ";
}
cout<<endl;
    return 0;
}