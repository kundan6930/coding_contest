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
    int c=0;
   int n1=n;
    if(n1<50)
    {
        int k=50-n1;
       if(k%2!=0)
       {
         cout<<(k)/2+3<<endl;
       }
       else{
        cout<<(k)/2<<endl;
       }
    }
    else
    {
        if((n1-50)%3==0)
        {
            c+=(n1-50)/3;
        }
        else if((n1-50)%3==2)
        {
          c+=(n1-50)/3+3;
        }
        else
        {
            c+=(n1-50)/3+2;
        }
        cout<<c<<endl;
    }
    
}
    return 0;
}
