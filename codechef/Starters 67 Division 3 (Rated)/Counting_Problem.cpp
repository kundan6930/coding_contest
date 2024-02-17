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
    int a[n];
    int o=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2!=0)
        {
            o++;
        }
    }
    int c=0,f=0;
    for(int i=0;i<n;i++)
    {
       if(a[i]%2!=0) 
       {
        c++;
       }
       if(c%2!=0 && (o-c)%2!=0)
       {
         f=1;
         break;
       }
    }
    if(f==1)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
    return 0;
}