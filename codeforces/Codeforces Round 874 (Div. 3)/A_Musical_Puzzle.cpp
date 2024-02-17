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
    map<string,int>m;
   
    for(int i=0;i<n-1;i++)
    {
         string s1;
      s1+=(s[i]);
      s1+=(s[i+1]);
       m[s1]++;
    }
    cout<<m.size()<<endl;
}
    return 0;
}