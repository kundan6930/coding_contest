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
    string s,t,u;
    cin>>s;
    cin>>t;
    cin>>u;
    int k=(t[0]-s[0]+26)%26;
    for(int i=0;i<n;i++)
    {
        int k1=u[i]-'a';
        k1=(k1+k)%26;
        u[i]='a'+k1;
    }
    cout<<u<<endl;
}
    return 0;
}