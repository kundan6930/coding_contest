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
    if(n==1)
    {
        cout<<"1"<<endl;
    }
    else if(n%2!=0)
    {
        vector<vector<int>>a(n,vector<int>(n));
       int c=1;
       for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                a[i][j]=c;
                c+=1;
            }
        }  
        c=1+n;   
       for(int i=0;i<n;i++)
        {
            
                 a[1][(i+1)%n]=c;
                 c+=1;
        }     
       for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
        cout<<endl;

        }     
        cout<<endl;


    }
    else{
        
    }
}
    return 0;
}