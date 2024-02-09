#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main (){
int t;
cin>>t;
while(t--)
{
    int n,m;
    cin>>n>>m;
    if(abs(m-n)%2==0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
    return 0;
}