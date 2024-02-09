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
    int c=1,maxi=0;
    for(int i=0;i<n-1;i++)
    {
       if(s[i]==s[i+1])
       {
        c++;
       }
       else{
        maxi=max(maxi,c);
        c=1;
       }
    }
     maxi=max(maxi,c);
     cout<<maxi+1<<endl;
}
    return 0;
}