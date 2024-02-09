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
    int prev=-1;
    int c=0,ans=0;;
    for(int i=0;i<n;i++)
    {
        if(s[i]==':')
        {
           if(prev!=-1)
           {
               if( c!=0 && c==i-prev-1)
               {
                   ans++;
               }
           }
           prev=i;
           c=0;
        }
        else if(s[i]==')')
        {
            c++;
        }
        else
        {
            c=0;
        }
    }
    cout<<ans<<endl;
}
    return 0;
}