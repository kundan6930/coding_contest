#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main ()
{
       int n,m;
       cin>>n>>m;
       vector<vector<char>>a(n,vector<char>(m));
       int mini=0,maxi=0;
       for(int i=0;i<n;i++)
       {  int c=0,s=0,ones=0;
           for(int j=0;j<m;j++)
         {
             cin>>a[i][j];
             if(a[i][j]=='1')
             {
               c++;
               ones++;
             }
             else
             {
                 s+=(c/2);
                 c=0;
             }
         }
         s+=(c/2);
          s=min(s,m/4);
          mini+=s+(ones-2*s);
          //cout<<s<<" "<<ones<<" "<<mini<<endl;
          //cout<<s1<<" "<<ones<<" "<<maxi<<"*"<<endl;
       }
       for(int i=0;i<n;i++)
       {  int c=0,ones=0,j;
           for( j=0;j<m-1;j++)
         {
            if(a[i][j]=='0' || a[i][j+1]=='0' )
            {
                c++;
                j++;
            }
         }
            for( j=0;j<m;j++)
         {
            if(a[i][j]=='1')
            {
                ones++;
            }
         }
         maxi+=(ones-(m/4-min(m/4,c)));
       }
       cout<<mini<<" "<<maxi<<endl;
    
    return 0;
}