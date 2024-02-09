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
    int ct=0;
    if(a==1)
    {
       ct++;
    }
    if(b==1)
    {
       ct++;
    }
    if(c==1)
    {
       ct++;
    }
   if(ct>=2)
   {
    cout<<"Not now"<<endl;
   }
   else{
     cout<<"Water filling time"<<endl;
   }
}
    return 0;
}