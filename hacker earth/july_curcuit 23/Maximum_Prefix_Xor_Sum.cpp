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
    int z=0,o=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
           z++;
        }
        else{
            o++;
        }
    }
   int ans=0;
   if(o==0)
   {
    cout<<ans<<endl;
   }
   else if(o%2!=0)
   {
     ans+=((o/2)+1+z);
     cout<<ans<<endl;
   }
   else{
        ans+=((o/2)+z);
        cout<<ans<<endl;
   }
}
    return 0;
}