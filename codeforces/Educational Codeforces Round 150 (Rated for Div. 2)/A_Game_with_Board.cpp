#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    if(n==1 )
    {
        cout<<"Alice"<<endl;
    }
    else if(n==2)
    {
      cout<<"Bob"<<endl;
    }
    else if(n%2!=0)
    {
        if(n<=4)
        {
         cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
    }
    else if(n%2==0)
    {
        if(n>4)
       {
        cout<<"Alice"<<endl;
       }
       else{
        cout<<"Bob"<<endl;
       }
    }
}
    return 0;
}