#include <bits/stdc++.h>
using namespace std;
using ll=long long;
string s="codeforces";
int main (){
int t;
cin>>t;

while(t--)
{
    string s1;
    cin>>s1;
    int c=0;
    for(int i=0;i<s1.length();i++)
    {
        if(s[i]!=s1[i])
        {
            c++;
        }
    }
    cout<<c<<endl;
}
    return 0;
}