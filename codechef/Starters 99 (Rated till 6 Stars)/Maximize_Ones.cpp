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
    for(int i=1;i<n-1;i++)
    {
       if(s[i]=='0')
       {
          int l=s[i-1]-'0';
          int r=s[i+1]-'0';
          if(l^r==1)
          {
            s[i]='1';
          }
       }
    }
    cout<<s<<endl;
}
    return 0;
}