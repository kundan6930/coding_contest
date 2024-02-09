#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
string s;
cin>>s;
int f=0;
for(int i=0;i<=(int)s.length();i++)
{
    if(i%2==1 && s[i]=='1')
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
    return 0;
}