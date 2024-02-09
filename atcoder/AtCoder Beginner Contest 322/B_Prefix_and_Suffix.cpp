#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
string s,t;
cin>>s>>t;
int p=1,su=1;
for(int i=0;i<n;i++)
{
    if(s[i]!=t[i])
    {
        p=0;
        break;
    }
}
for(int i=m-1;i>=m-n;i--)
{
    if(s[i-(m-n)]!=t[i])
    {
        su=0;
        break;
    }
}
if(p==1 && su==1)
{
    cout<<"0"<<endl;
}
else if(p==1 && su==0)
{
    cout<<"1"<<endl;
}
else if(p==0 && su==1)
{
    cout<<"2"<<endl;
}
else{
    cout<<"3"<<endl; 
}
    return 0;
}