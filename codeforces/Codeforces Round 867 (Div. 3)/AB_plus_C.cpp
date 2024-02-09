#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    ll x;
    cin>>x;
    if(x==1)
    {
        cout<<"-1"<<endl;
    }
    else if(x==2)
    {
        cout<<"1"<<" "<<"1"<<" "<<"1"<<endl;
    }
    else{
        if( x<=1000000)
        {
        if(x%2==0 )
        {
            cout<<(x-2)/2<<" "<<"2"<<" "<<"2"<<endl;
        }
        else{
            cout<<(x-1)/2<<" "<<"2"<<" "<<"1"<<endl;
        }
        }
        else{
        ll k=sqrt(x);
         ll p=x-(k*k);
         if(p==0 || p>1000000)
         {
            cout<<"-1"<<endl;
         }
         else{
            cout<<k<<" "<<k<<" "<<p<<endl;
         }
        }
    }

}
    return 0;
}