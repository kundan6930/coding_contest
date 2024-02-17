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
    map<int,int>m;
    for(int i=1;i<=9;i++)
    {
      m[i]=i;
    }
    m[0]=10;
    char p=s[0];
    int ans=m[p-'0'];
    for(int i=1;i<4;i++)
    {
        if(s[i]==p)
        {
            ans+=1;
        }
        else
        {
             ll k=s[i]-'0';
             ll k1=p-'0';
             ans+=abs(m[k]-m[k1]);
             ans+=1;
        }
       // cout<<ans<<" "<<s[i]<<" "<<p<<endl;
        p=s[i];
        
         
    }
    cout<<ans<<endl;

}
    return 0;
}