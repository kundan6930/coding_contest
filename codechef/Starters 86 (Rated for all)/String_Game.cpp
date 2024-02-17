#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
ll t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ones=0,zeroes=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            ones++;
        }
        else{
            zeroes++;
        }
    }
    ll k=min(ones,zeroes);
    if(k%2)
    {
        cout<<"Zlatan"<<endl;
    }
    else{
        cout<<"Ramos"<<endl;
    }

}
    return 0;
}