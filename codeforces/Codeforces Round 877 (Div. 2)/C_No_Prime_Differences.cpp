#include <bits/stdc++.h>
using namespace std;
using ll=long long;
bool solve(int n)
{
    
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
   
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}
int main (){
int t;
cin>>t;
while(t--)
{
    int n,m;
    cin>>n>>m;
    if(!solve(m))
    {
        int c=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
              cout<<c<<" ";
              c++;
            }
            cout<<endl;
        }
    }
    else{
        if(n==4)
        {
            vector<vector<int>>kk(n,vector<int>(m));
           int c=1;
        int k=(m/2)+1;
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<n;j++)
            {
              kk[j][i]=c;
              c++;
            }
            c+=n;
            //cout<<endl;
        }
         c=n+1;
         k=(m/2)+1;
        for(int i=k;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
              kk[j][i]=c;
              c++;
            }
            c+=n;
           // cout<<endl;
        }
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<kk[i][j]<<" ";
            }
            cout<<endl;
        }
        }
        else{
        int c=1;
        int k=n/2;
        if(n%2!=0)
        {
            k+=1;
        }
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<m;j++)
            {
              cout<<c<<" ";
              c++;
            }
            c+=m;
            cout<<endl;
        }
         c=m+1;
         k=(n/2);
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<m;j++)
            {
              cout<<c<<" ";
              c++;
            }
            c+=m;
            cout<<endl;
        }
        }
    }
    cout<<endl;
}
    return 0;
}