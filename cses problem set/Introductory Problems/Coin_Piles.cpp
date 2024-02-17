#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int a,b;
    cin>>a>>b;
    if(a==0 && b==0)
    {
        cout<<"YES"<<endl;
    }
    else if(a==0 || b==0)
    {
         cout<<"NO"<<endl;
    }
    else
    {
        if(b==2*a || a==2*b)
        {
            cout<<"YES"<<endl;
        }
    else if(a%6==0 && b%6==0)
    {
        cout<<"YES"<<endl;
    }
    else if(a%3==0 && b%3==0)
    {
        cout<<"YES"<<endl;
    }
    else if(a%3==1 && b%3==2)
    {
        cout<<"YES"<<endl;
    }
    else if(a%3==2 && b%3==1)
    {
        cout<<"YES"<<endl;
    }
    else if(a%4==1 && b%4==2)
    {
        cout<<"YES"<<endl;
    }
    else if(a%4==2 && b%4==1)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
}
    return 0;
}