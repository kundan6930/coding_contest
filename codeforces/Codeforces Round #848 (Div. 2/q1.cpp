#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
     int n;
     cin>>n;
     int a[n],sum=0;
     for(int i=0;i<n;i++)
     {
        cin>>a[i];
        sum+=a[i];
     }
     int flag=0;
     for(int i=0;i<n-1;i++)
     {
        if(a[i]==-1 && a[i+1]==-1)
        {
            flag=1;
            break;
        }
     }
     if(flag==1)
     {
        cout<<sum+4<<endl;
     }
     else if(sum==n)
     {
        cout<<sum-4<<endl;
     }
     else
     {
       cout<<sum<<endl;
     }


        
    }
    return 0;
    }