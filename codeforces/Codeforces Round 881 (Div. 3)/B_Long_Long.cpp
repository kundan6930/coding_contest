#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
int t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    ll a[n];
    ll s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=abs(a[i]);
    }
    int p=0,ne=0,c=0;
    for(int i=0;i<n;i++)
    {
       if(a[i]<=0)
       {
        if(ne==0 && a[i]!=0)
        {
            c++;
        }
        if(a[i]!=0)
        {
          ne=1;
        }
          p=0;

       }
       else{
         p=1;
         ne=0;
       }
    }
    cout<<s<<" "<<c<<endl;
}
    return 0;
}