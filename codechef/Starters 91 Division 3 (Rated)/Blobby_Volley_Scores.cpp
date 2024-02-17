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
   string s;
   cin>>s;
   int f=1;
   int a=0,b=0;
   for(int i=0;i<n;i++)
   {
      if(f==1)
      {
        if(s[i]=='A')
        {
         a++;
        }
        else{
            f=0;
        }
      }
      else{
        if(s[i]=='B')
        {
         b++;
        }
        else{
            f=1;
        }
      }
   } 
   cout<<a<<" "<<b<<endl;
}
    return 0;
}