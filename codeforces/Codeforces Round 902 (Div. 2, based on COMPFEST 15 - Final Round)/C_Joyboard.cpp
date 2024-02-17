#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n,m,k;
    cin>>n>>m>>k;
    if(k>3)
    {
        cout<<"0"<<endl;
    }
    else if(k==1)
    {
        cout<<"1"<<endl;
    }
    else if(k==2)
    {
    
        if(m<=n)
        {
            cout<<m<<endl;
        }
        else
        {
            int k=m/n;
            k-=1;
            cout<<n+k<<endl;
        }
    }
    else
    {

        if(m<=n)
        {
            cout<<"0"<<endl;
        }
        else
        {
           int k=m/n;
            k-=1;
            int k1=m-n;
            cout<<k1-k<<endl;
        }
    }
}
    return 0;
}