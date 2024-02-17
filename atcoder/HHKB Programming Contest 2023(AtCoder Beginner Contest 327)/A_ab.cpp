#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){

    int n;
    cin>>n;
    string s;
    cin>>s;
    int f=0;

    for(int i=0;i<n-1;i++)
    {
        
       if((s[i]=='a' && s[i+1]=='b') || (s[i]=='b' && s[i+1]=='a'))
       {
         f=1;
         break;
       }
    }
    if(f==1)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}