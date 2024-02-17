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
    
    int a=0,b=0,c=0,d=0;
    for(int i=0;i<n;i++)
    {
         string s;
         cin>>s;
       if(s=="O")
       {
        a++;
       }
       else if(s=="A")
       {
         b++;
       }
       else if(s=="B")
       {
          c++;
       }
       else 
       {
         d++;
       }
    }
    int ans=a+max(b,c)+d;
    cout<<ans<<endl;
}
    return 0;
}