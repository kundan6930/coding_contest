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
    ll a,b,c;
    cin>>a>>b>>c;
    ll k1,k2;
    k1=c/2;
    k2=c/2;
    k1+=a;
    k2+=b;
    if(c%2!=0)
    {
        k1+=1;
    }
    if(k1>k2)
    {
        cout<<"First"<<endl;
    }
    else{
          cout<<"Second"<<endl;
    }
}
    return 0;
}