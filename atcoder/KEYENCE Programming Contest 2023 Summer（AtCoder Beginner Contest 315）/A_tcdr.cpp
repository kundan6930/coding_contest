#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int solve(char ch)
{
    string str = "aeiouAEIOU";
    return (str.find(ch) != string::npos);
}
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;
string ans;
for(int i=0;i<s.length();i++)
{
    if(!solve(s[i]))
    {
        ans+=s[i];
    }
}
cout<<ans<<endl;
    return 0;
}