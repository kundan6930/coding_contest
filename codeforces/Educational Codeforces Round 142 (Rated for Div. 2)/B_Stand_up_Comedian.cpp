#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int s=a+b+c+d;
    int al=a+b;
    int bo=a+c;
    int ans=min(al,bo);
    ans*=2;
    ans+=1;
    ans=min(ans,s);
    if(a==0)
    {
        cout<<"1"<<endl;
    }
    else
    {
    cout<<ans<<endl;
    }
}
    return 0;
}