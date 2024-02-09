#include <bits/stdc++.h>
using namespace std;
using ll=long long;
vector<string>solve(vector<string>a,int k)
{
    int n=a.size();
    int j=0;
    map<string,int>mp;
    vector<string>ans;
    for(int i=n-1;i>=0;i--)
    {
       if(mp[a[i]]<=0)
       {
          ans.push_back(a[i]);
          j++;
       }
       mp[a[i]]++;
       if(j>=k)
       {
        break;
       }
    }
    return ans;
}
int main (){
int t;
cin>>t;
while(t--)
{
    
}
    return 0;
}