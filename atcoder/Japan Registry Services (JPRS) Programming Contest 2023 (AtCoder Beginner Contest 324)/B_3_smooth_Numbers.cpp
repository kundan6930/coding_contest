#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
ll n;
cin>>n;
while(n%2==0 || n%3==0)
{
    if(n%2==0)
    {
        n/=2;
    }
    else if(n%3==0)
    {
        n/=3;
    }
}
if(n==1)
{
    cout<<"Yes"<<endl;
}
else{
        cout<<"No"<<endl;
}
    return 0;
}