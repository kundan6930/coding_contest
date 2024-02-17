#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    int n=s.length();
   
    if(s[0]=='0')
    {
        cout<<"0"<<endl;
    }
    else
    {
         int f=0,c=1;
        for(int i=0;i<n;i++)
        {
              if(i==0 && s[i]=='?')
              {
                c*=9;
              }
              else if( s[i]=='?')
              {
                    c*=10;
              }
        }
        cout<<c<<endl;
    }

}
    return 0;
}