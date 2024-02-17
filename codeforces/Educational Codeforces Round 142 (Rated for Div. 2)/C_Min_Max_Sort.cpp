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
    int a[n],b[n+1],l[n+1];
    int c=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]]=i;
    }
    l[n]=1;
    for(int i=n-1;i>=0;i--)
    {
        if(b[i]<b[i+1])
        {
            l[i]=l[i+1]+1;
        }
        else{
            l[i]=1;
        }
    }
    int mini=n;
    for(int i=1;i<=n;i++)
    {
      mini=min(mini,max(i-1,(n-(i+l[i]-1))));
    }
  
    cout<<mini<<endl;
}
    return 0;
}