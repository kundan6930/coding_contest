#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    ll y,x;
    cin>>y>>x;
    ll k=max(y,x);
    ll dia=k*k-(k-1);
    if(k%2==0)
    {
        cout<<dia-(x-y)<<endl;
    }
    else
    {
         cout<<dia+(x-y)<<endl;
    }
    


}
    return 0;
}