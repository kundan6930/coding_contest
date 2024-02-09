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
    vector<int>a(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxi=a[0];
    int o=0,e=a[0];
    if(e<0)
    {
        e=0;
    }
    for(int i=1;i<n;i++)
    {
        if(abs(a[i])%2!=abs(a[i-1])%2)
        {
           e+=a[i];
           maxi=max(maxi,e);
           if(e<0)
           {
             e=0;
           }
        }
        else
        {
          e=a[i];
           maxi=max(maxi,e);
           if(e<0)
           {
            e=0;
           }
        }
    }
   // maxi=max(maxi,e);
    cout<<maxi<<endl;
}
    return 0;
}