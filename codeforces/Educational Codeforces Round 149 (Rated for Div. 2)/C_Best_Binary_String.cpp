#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    int n=s.length();
    int i=0;
    while(s[i]=='?')
    {
        s[i]='0';
        i++;
    }
    for(;i<n;i++)
    {
        if(s[i]!='?')
        {
            continue;
        }
        else if(i>0 && s[i]=='?')
        {
            s[i]=s[i-1];
        }
    }
    cout<<s<<endl;
}
    return 0;
}