#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    if(n==1)
    {
        cout<<"0"<<endl;
    }
    else{
    ll k= sqrt(n);
    if(k*k==n)
    {
        cout<<"k+1"<<endl;
    }
    else
    {
    cout<<k<<endl;
    }
    }

}
    return 0;
}