#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    int a,b,c;
    cin>>a>>b>>c;
    int ct=1;
    for(int i=0;i<c;i++)
    {
       int b1=(a>>i)&1;
       int a1=(b>>i)&1;
       if(a1==b1)
       {
         ct*=1;
       }
       else
       {
         ct*=2;
       }
       
    }
    cout<<ct<<endl;
}
    return 0;
}