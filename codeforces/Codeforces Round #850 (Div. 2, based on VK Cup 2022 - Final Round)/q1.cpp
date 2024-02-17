#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
        long long n;
        cin>>n;
        long long aw=0,bw=0,ab=0,bb=0,i=0,k=1;
        while(n>0)
        {
          if(i%2==0)
          { 
            if(k<=n)
          { 
                if(k%2!=0)
                {
                  aw+=(k-floor(k/2));
                  ab+=floor(k/2);
                }
                else
               {
                  aw+=(k/2);
                 ab+=k/2;
                }
            
            n-=k;
            k++;
          }
          else
          { 
            if(n%2!=0)
                {
                  aw+=(n-floor(n/2));
                  ab+=floor(n/2);
                }
                else
                {
                  aw+=(n/2);
                  ab+=n/2;
                }
            n-=n;
            k++;
          }
          if(n>0)
          {
             if(k<=n)
           {    if(k%2!=0)
                {
                  bb+=(k-floor(k/2));
                  bw+=floor(k/2);
                }
                else
               {
                  bw+=(k/2);
                 bb+=k/2;
                }
                  //bw+=floor(k/2);
                 // bb+=floor(k/2);
                  n-=k;
                  k++;
           }
          else
          {if(n%2!=0)
                {
                  bb+=(n-floor(n/2));
                  bw+=floor(n/2);
                }
                else
               {
                  bw+=(n/2);
                 bb+=n/2;
                }
                 // bw+=floor(n/2);
                //  bb+=floor(n/2);
            n-=n;
            k++;
          }
          }
        }
        else
        {
           if(k<=n)
          {    if(k%2!=0)
                {
                  bb+=(k-floor(k/2));
                  bw+=floor(k/2);
                }
                 else
               {
                  bw+=(k/2);
                  bb+=k/2;
                }
            n-=k;
            k++;
          }
          else
          {   if(n%2!=0)
                {     
            bb+=(n-floor(n/2));
            bw+=floor(n/2);
                }
                 else
               {
                  bw+=(n/2);
                  bb+=n/2;
                }
            
            n-=n;
            k++;
          }
          if(n>0)
          {
             if(k<=n)
           {   if(k%2!=0)
                {
                  aw+=(k-floor(k/2));
                  ab+=floor(k/2);
                }
                else
               {
                  aw+=(k/2);
                 ab+=k/2;
                }
            
                 // aw+=floor(k/2);
                //  ab+=floor(k/2);
            n-=k;
            k++;
           }
          else
          {  
            if(n%2!=0)
                {
                  aw+=(n-floor(n/2));
                  ab+=floor(n/2);
                }
                else
                {
                  aw+=(n/2);
                  ab+=n/2;
                }
           // aw+=floor(n/2);
           // ab+=floor(n/2);
            n-=n;
            k++;
          }
          }
        }
        i++;

    }
    cout<<aw<<" "<<ab<<" "<<bw<<" "<<bb<<endl;
    }
    return 0;
}