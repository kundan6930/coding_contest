#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int n,m;
int solver(vector<vector<int>>a)
{
 
      for(int i=0;i<n;i++)
      {
           map<int,int>mp;
        for(int j=0;j<m;j++)
        {
            mp[a[i][j]]++;
           if(mp[a[i][j]]>1)
           {
              return false;
           }  
        }
      }
      return true;
}
int solvek(vector<vector<int>>a)
{
 for(int k=0;k<3;k++)
 {
    for(int k1=0;k1<3;k1++)
    {
        int n1=(k+1)*3;
        int m1=(k1+1)*3;
        map<int,int>mp;
      for(int i=k*3;i<n1;i++)
      {   
        for(int j=k1*3;j<m1;j++)
        {
            mp[a[i][j]]++;
           if(mp[a[i][j]]>1)
           {
              return false;
           }  
        }
      }
    }
 }
      return true;
}
int solvec(vector<vector<int>>a)
{
 
      for(int i=0;i<m;i++)
      {
           map<int,int>mp;
        for(int j=0;j<n;j++)
        {
            mp[a[j][i]]++;
           if(mp[a[j][i]]>1)
           {
              return false;
           }  
        }
      }
      return true;
}
int main (){
 n=9,m=9;
vector<vector<int>>a(n,vector<int>(n));
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>a[i][j];
    }
}
    int k=solver(a)&solvec(a)&solvek(a);
    if(k)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }


    return 0;
}