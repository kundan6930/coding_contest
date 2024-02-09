#include <bits/stdc++.h>
using namespace std;

int main (){
    
    int t;
    cin>>t;
    while(t--)
    { 
      long long int x;
      cin>>x;
      if(x%2!=0)
      {
        cout<<"-1"<<endl;
      }
      else
      {
      int a=x/2;
      int b=3*a;
      if((a^b)==x)
      {
        cout<<a<<" "<<b<<endl;
      }
      else
      {
       cout<<"-1"<<endl;
      }
      }

    }
    return 0;
}