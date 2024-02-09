#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>a(26);
    for(int i=0;i<26;i++)
    {
        a[i]=i+1;
    }
    for(int i=0;i<n;i++)
    {
        a[s[i]-'A']--;
    }
    int ans=0;
    for(int i=0;i<26;i++)
    {
         if(a[i]<1)
         {
            ans++;
         }
    }
    cout<<ans<<endl;
}
    return 0;
}