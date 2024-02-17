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
    int c1=1,c2=1;
    vector<int>a1(2*n+1),b1(2*n+1);
    int i=0;
    for( i=0;i<n-1;i++)
    {
       if(a[i]==a[i+1])
       {
          c1++;
       }
       else{
        a1[a[i]]=max(a1[a[i]],c1);
        c1=1;
       } 
       if(b[i]==b[i+1])
       {
          c2++;
       }
       else{
        b1[b[i]]=max(b1[b[i]],c2);
        c2=1;
       } 
    }
    a1[a[i]]=max(a1[a[i]],c1);
    b1[b[i]]=max(b1[b[i]],c2);
    int maxi=0;
    for(int i=0;i<a1.size();i++)
    {
      maxi=max(maxi,(a1[i]+b1[i]));
    }
    cout<<maxi<<endl;
}
    return 0;
}