#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    ll a,b;
    cin>>a>>b;
    if(!((a+b)&1) && (a&1) && (b&1))
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

}
    return 0;
}