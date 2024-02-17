#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0;
    int maxi=0;
    for(int i=0;i<n;i++)
    {
         if(s[i]=='1')
         {
            c++;
            maxi=max(maxi,c);
         }
         else
         {
            c=0;
         }
    }
    cout<<maxi<<endl;
}
    return 0;
}