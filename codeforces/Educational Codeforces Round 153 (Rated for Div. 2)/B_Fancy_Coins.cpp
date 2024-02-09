#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int m,k,a1,ak;
    cin>>m>>k>>a1>>ak;
    int p=m/k;
    int mini=min(p,ak);
    int m1=m;
    m1-=(mini*k);
    if(m1<=a1)
    {
        cout<<"0"<<endl;
    }
    else
    {
        m1-=a1;
        int ans=0;
        int p1=m1/k;
        ans+=p1;
        m1-=(p1*k);
        ans+=m1;  
     //   cout<<m1<<" "<<p1<<" "<<ans<<endl;
        cout<<ans<<endl;
    }
}
    return 0;
}