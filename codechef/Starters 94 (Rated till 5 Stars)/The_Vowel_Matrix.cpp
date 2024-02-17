#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll mod=1e9+7;
int solve(char ch)
{
    return (0x208222 >>
           (ch & 0x1f)) & 1;  
}
int main (){
int t;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
       if(solve(s[i]))
       {
          a.push_back(i);
       }
    }
    ll ans=1;
    for(int i=k;i<a.size();i+=k)
    { 
      ans*=(a[i]-a[i-1]);
      ans%=mod; 
    }
cout<<ans<<endl;

}
    return 0;
}