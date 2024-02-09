#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int n,m;
    cin>>n>>m;
    vector<int>a(26),b(26);
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<n;i++)
    {
        a[s1[i]-'a']++;
    }
    for(int i=0;i<m;i++)
    {
        b[s2[i]-'a']++;
    }
    int ans=INT_MAX;
    for(int i=0;i<26;i++)
    {
        if(b[i]!=0)
        {
          int k=a[i]/b[i];
          ans=min(ans,k);
        }
    }
    if(ans==INT_MAX)
    {
        cout<<"0"<<endl;
    }
    else
    {        
    cout<<ans<<endl;
    }
}
    return 0;
}