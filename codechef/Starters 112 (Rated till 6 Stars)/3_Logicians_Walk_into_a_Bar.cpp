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
    int o=0,z=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
              z++;
        }
        else 
        {
            o++;
        }
       if(z>0)
       {
         cout<<"NO"<<endl;
       }
       else if(z==0 && i==n-1)
       {
         cout<<"YES"<<endl;
       }
       else{
        cout<<"IDK"<<endl;
       }
    }
}
    return 0;
}