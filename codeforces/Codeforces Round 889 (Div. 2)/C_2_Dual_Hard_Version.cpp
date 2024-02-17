#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<int>a(n);
    int p=0,ne=0,maxi=-21, mini=21,pi=0,md,im;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=0)
        {
            ne++;
        }
        else{
            pi=i;
            p++;
        }
        if(a[i]>maxi)
        {
            md=i;
            maxi=a[i];
        }
        if(a[i]<mini)
        {
            im=i;
            mini=a[i];
        }
        
    }
    if(mini==maxi)
    {
        cout<<"0"<<endl;
    }
    else if(p==n || (mini==0))
    {
          cout<<n-1<<endl;
          for(int i=1;i<=n-1;i++)
          {
            cout<<i+1<<" "<<i<<endl;
          }
    }
    else if(ne==n)
    {
        cout<<n-1<<endl;
          for(int i=n;i>1;i--)
          {
            cout<<i-1<<" "<<i<<endl;
          }
    }
    else if( ne<=7)
    {    
          cout<<ne+n+4<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<md+1<<" "<<md+1<<endl;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]<=0)
            {
            cout<<i+1<<" "<<md+1<<endl;
            }
        }
          for(int i=1;i<=n-1;i++)
          {
            cout<<i+1<<" "<<i<<endl;
          }     
    }
    else if( p<=7)
    { 
          cout<<p+n+4<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<im+1<<" "<<im+1<<endl;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
            {
            cout<<i+1<<" "<<im+1<<endl;
            }
        }
          for(int i=n;i>1;i--)
          {
            cout<<i-1<<" "<<i<<endl;
          } 
    }
    else
    {
        if(maxi>=abs(mini))
        {
              cout<<ne+n-1<<endl;
           for(int i=0;i<n;i++)
          {
            if(a[i]<=0)
            {
            cout<<i+1<<" "<<md+1<<endl;
            }
          }
           for(int i=1;i<=n-1;i++)
          {
            cout<<i+1<<" "<<i<<endl;
          }   
        }
        else
        {
             cout<<p+n-1<<endl;
           for(int i=0;i<n;i++)
          {
            if(a[i]>0)
            {
            cout<<i+1<<" "<<im+1<<endl;
            }
         }
          for(int i=n;i>1;i--)
          {
            cout<<i-1<<" "<<i<<endl;
          } 
        }
    } 
    

}
    return 0;
}