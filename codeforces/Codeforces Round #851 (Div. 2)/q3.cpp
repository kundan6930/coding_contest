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
     if(n%2==0)
     {
        cout<<"No"<<endl;
     }
     else
     {  cout<<"yes"<<endl;
        int k=2*n+1;
        int m=1;
        for(int i=0;i<=n/2;i++)
        {
           cout<<k-m<<" "<<m<<endl;
            m+=2;
            k++;
        }
         k=2*n;
         m=n-1;
        for(int i=1;i<=n/2;i++)
        {
           cout<<m<<" "<<k-m<<endl;
            m-=2;
            k--;
        }
     }


        
    }
    return 0;
    }