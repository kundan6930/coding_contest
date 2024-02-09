#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    { 
      int n;
      cin>>n;  
      vector<vector<int>>a(n,vector<int>(n)) ;
      int x=2;
     for(int i=0;i<n;i++)
     {
        a[0][i]=x;
        x+=2;
     }
     for(int i=1;i<n;i++)
     {
        if(i%2==1)
        {
        int y=a[i-1][0]+2;
        a[i][0]=y;
        x=y+1;
        for(int j=1;j<n;j++)
        {
            a[i][j]=x;
            x+=2;
        }
        }
        else{
            int y=a[i-1][0]+1;
        a[i][0]=y;
        x=y+1;
        for(int j=1;j<n;j++)
        {
            a[i][j]=x;
            x+=2;
        }
        }
        
     }
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
     }

        
    }
    return 0;
    }