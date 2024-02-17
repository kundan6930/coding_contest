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
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
   // sort(a,a+n);
  //  sort(b,b+n);
    int c1=0,c2=0;
    int maxi=0,maxi1=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
          c1++;
        }
        else{
            maxi=max(maxi,c1);
            c1=0;
        }
    }
    maxi=max(maxi,c1);
    for(int i=0;i<n;i++)
    {
        
        if(b[i]!=0)
        {
          c2++;
        }
        else{
            maxi1=max(maxi1,c2);
            c2=0;
        }
    }
    maxi1=max(maxi1,c2);
   // cout<<maxi<<" "<<maxi1<<endl;
    if(maxi1==maxi)
    {
        cout<<"Draw"<<endl;
    }
    else if(maxi1>maxi)
    {
        cout<<"Addy"<<endl;
    }
    else{
         cout<<"Om"<<endl;
    }
}
    return 0;
}