#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--)
    { 
       int n,s,r;
       cin>>n>>s>>r;
       int re=r%(n-1);
       int d=r/(n-1);
       for(int i=0;i<n;i++)
       {
          if(i<re)
          {
            cout<<d+1<<" ";
          }
          else if(i==n-1)
          {
             cout<<s-r<<" ";
          }
          else
          {
                cout<<d<<" ";
          }
       }
       cout<<endl;


    }
    return 0;
}