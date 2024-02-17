#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int solve(char a, char b)
{
    if(a==b)
    {
        return 0;
    }
    if(a=='R' && b=='S')
    {
         return 1;
    }
     if(a=='S' && b=='P')
    {
        return 1;
    }
     if(a=='P' && b=='R')
    {
        return 1;
    }
    return 2;
}
int main (){
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    string a,b;
    cin>>a;
    cin>>b;
    int c1=0,c2=0;
    for(int i=0;i<n;i++)
    {
        char ch1=a[i];
        char ch2=b[i];
        int k=solve(ch1,ch2);
        if(k==1)
        {
            c1++;
        }
        else if(k==2)
        {
            c2++;
        }
    }
    if(c1>c2)
    {
        cout<<"0"<<endl;
    }
    else{

        int k1=c2-c1;
        int ans=k1/2;
        cout<<ans+1<<endl;
    }
}
    return 0;
}