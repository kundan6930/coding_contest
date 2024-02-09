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
        int a=0,b=0,i=0,k=1;
        while(n>0)
        {
          if(i%2==0)
          { 
            if(k<=n)
          {
            a+=k;
            n-=k;
            k++;
          }
          else
          {
            a+=n;
            n-=n;
            k++;
          }
          if(n>0)
          {
             if(k<=n)
           {
            b+=k;
            n-=k;
            k++;
           }
          else
          {
            b+=n;
            n-=n;
            k++;
          }
          }
        }
        else
        {
           if(k<=n)
          {
            b+=k;
            n-=k;
            k++;
          }
          else
          {
            b+=n;
            n-=n;
            k++;
          }
          if(n>0)
          {
             if(k<=n)
           {
            a+=k;
            n-=k;
            k++;
           }
          else
          {
            a+=n;
            n-=n;
            k++;
          }
          }
        }
        i++;

    }
    cout<<a<<" "<<b<<endl;
    }
    return 0;
}