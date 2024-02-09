#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>a(26);
    for(int i=0;i<n;i++)
    {
        a[s[i]-'a']++;
    }
    int c=0;
    for(int i=0;i<26;i++)
    {
        if(a[i]%2!=0)
        {
          c++;
        }
    }
    if(k<c-1)
    {
      cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    
}
    return 0;
}