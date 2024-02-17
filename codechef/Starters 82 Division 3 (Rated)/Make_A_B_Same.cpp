#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(vector<int>a,vector<int>b,int n,int f)
{
       for(int i=0;i<n;i++)
       {

        if(a[i]!=b[i])
        {
            if(a[i]==1 || i==0 || i==n-1)
            {
              cout<<"NO"<<endl;  
              return;
            }
            else 
            {
                //cout<<f<<endl;
                if(f==1)
                {
                    cout<<"YES"<<endl;
                    return;
                }
                else{
                    cout<<"NO"<<endl;  
                    return;
                }
               
            }
        }
       }
       cout<<"YES"<<endl;
       return;
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
        int n;
       cin>>n;
         vector<int>a(n),b(n);
       int f=0;
       for(int i=0;i<n;i++)
       {
         cin>>a[i]; 
         if(a[i]==1)
         {
            f=1;
         }
         
       }
       for(int i=0;i<n;i++)
       {
         cin>>b[i]; 
         
       }
       
       solve(a,b,n,f);
         


        
    }
    return 0;
    }
    