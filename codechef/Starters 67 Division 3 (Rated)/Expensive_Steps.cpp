#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n,s1,e1,s2,e2;
    cin>>n>>s1>>e1>>s2>>e2;
    int x1=(n+1)-s1;
    int x2=s1;
    int y1=(n+1)-e1;
    int y2=e1;
    int minis=min({x1,x2,y1,y2});
    int xf1=(n+1)-s2;
    int xf2=s2;
    int yf1=(n+1)-e2;
    int yf2=e2;
    int minif=min({xf1,xf2,yf1,yf2});
    int ans=(abs(s1-s2)+abs(e1-e2));
    ans=min({ans,minis+minif});
    cout<<ans<<endl;
}
    return 0;
}