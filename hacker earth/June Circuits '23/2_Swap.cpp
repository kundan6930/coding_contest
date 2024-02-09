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
    string s1,s2;
    cin>>s1;
    cin>>s2;
    vector<int>ae(26),be(26),ao(26),bo(26);
    for(int i=0;i<n;i+=2 )
    {
       ae[s1[i]-'a']++;
       be[s2[i]-'a']++;
    }
    for(int i=1;i<n;i+=2 )
    {
       ao[s1[i]-'a']++;
       bo[s2[i]-'a']++;
    }
    int f=0;
    for(int i=0;i<26;i++)
    {
        if(ae[i]!=be[i] || bo[i]!=ao[i])
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
}
    return 0;
}